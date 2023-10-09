#include <iostream>
#include <cstdlib>

using namespace std;

/* Escreva um programa que cria uma struct produto (c�digo: inteiro; nome: string;
preco: real; qtdd: inteira;) e cria um vetor din�mico para N produtos (o tamanho do
vetor, N, e os dados do vetor devem ser lidos). Buscar um determinado produto
tendo como entrada o c�digo e imprimir todos os dados desse produto. O c�digo
do produto a ser buscado deve ser lido. O programa deve ter a seguinte divis�o de
m�dulos:
a. Fun��o1: ler N, alocar dinamicamente o vetor, ler as informa��es do vetor.
Comunicar as informa��es pela lista de par�metros;
b. Fun��o2: receber o valor de N, os valores do vetor e buscar o produto cujo
c�digo deve ter sido lido no main e passado na lista de par�metros. A
posi��o, dentro do vetor, do produto buscado deve retornar pelo return.
Se n�o encontrou o produto retornar -1 pelo return. N�o imprimir
mensagem dentro da fun��o;
c. Fun��o3: imprime os dados de UM produto.
d. main: declarar as vari�veis do problema e chama as fun��es para:
i. alocar espa�o e ler dados dos produtos;
ii. ler o c�digo a ser buscado;
ii. buscar o produto desejado, com o c�digo lido;(chamar a fun��o
busca_produto);
iv. com a posi��o encontrada na fun��o anterior, imprimir os dados do
produto. Antes deve testar se o retorno foi -1. Isso significa que n�o
encontrou o produto. N�o imprima, na fun��o, a mensagem. As
mensagens devem ficar no main; */

typedef struct{
	int codigo;
	char nome[100];
	float preco;
	int qtd;
}produto;

void ler(produto **produtos, int *N){
	
	cout << "Digite o valor de N: ";
	cin >> *N;
	*produtos = (produto*)calloc(*N, sizeof(produto));
	
	for(int i = 0; i < *N; i++){
		cout << "Produto Codigo: ";
		cin >> (*produtos)[i].codigo;
		cout << "Produto Nome: ";
		cin.ignore();
		cin.getline((*produtos)[i].nome, 100);
		cout << "Produto Preco: ";
		cin >> (*produtos)[i].preco;
		cout << "Produto Quantidade: ";
		cin >> (*produtos)[i].qtd;
	}
}

int prodBusca(produto *produtos, int cod, int N){
	
	for(int i = 0; i < N; i++){
		
		if(cod == produtos[i].codigo){
			return i;
		}
	}
	return -1;
}

void imprime(produto produtos[], int p){
	
	if(p == -1){
		cout << "Produto nao encontrado";
		return;
	}
	cout << "Produto Codigo: " << produtos[p].codigo << endl;
	cout << "Produto Nome: " << produtos[p].nome << endl;
	cout << "Produto Preco: " << produtos[p].preco << endl;
	cout << "Produto Quantidade: " << produtos[p].qtd << endl;
}

int main(){
	int N, cod, p;
	produto *produtos;
	
	ler(&produtos, &N);
	cout << "Digite o Codigo: ";
	cin >> cod;
	p = prodBusca(produtos, cod, N);
	imprime(produtos, p);
	
}
