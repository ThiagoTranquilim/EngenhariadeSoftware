#include <iostream>
#include <cstdlib>

using namespace std;

/* Escreva um programa que cria uma struct produto (código: inteiro; nome: string;
preco: real; qtdd: inteira;) e cria um vetor dinâmico para N produtos (o tamanho do
vetor, N, e os dados do vetor devem ser lidos). Buscar um determinado produto
tendo como entrada o código e imprimir todos os dados desse produto. O código
do produto a ser buscado deve ser lido. O programa deve ter a seguinte divisão de
módulos:
a. Função1: ler N, alocar dinamicamente o vetor, ler as informações do vetor.
Comunicar as informações pela lista de parâmetros;
b. Função2: receber o valor de N, os valores do vetor e buscar o produto cujo
código deve ter sido lido no main e passado na lista de parâmetros. A
posição, dentro do vetor, do produto buscado deve retornar pelo return.
Se não encontrou o produto retornar -1 pelo return. Não imprimir
mensagem dentro da função;
c. Função3: imprime os dados de UM produto.
d. main: declarar as variáveis do problema e chama as funções para:
i. alocar espaço e ler dados dos produtos;
ii. ler o código a ser buscado;
ii. buscar o produto desejado, com o código lido;(chamar a função
busca_produto);
iv. com a posição encontrada na função anterior, imprimir os dados do
produto. Antes deve testar se o retorno foi -1. Isso significa que não
encontrou o produto. Não imprima, na função, a mensagem. As
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
