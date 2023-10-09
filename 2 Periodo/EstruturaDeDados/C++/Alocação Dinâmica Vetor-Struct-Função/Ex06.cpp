#include <iostream>
#include <cstdlib>
#include <string.h>

using namespace std;

/* Continuando o programa anterior sobre struct produto, acrescente as seguintes
fun��es:
a. Fun��o: busca o produto de maior pre�o e o de menor pre�o. As posi��es
desses produtos devem voltar pela lista de par�metros. No main, incluir a
chamada dessa fun��o e a impress�o desses produtos, chamando a fun��o
imprimir_um_produto, constru�da anteriormente, duas vezes;
b. Fun��o: buscar um determinado produto (como a fun��o anterior:
busca_produto) com a diferen�a � que a busca ser� pelo nome do produto.
Retornar pelo return a posi��o de localiza��o. Da mesma forma o nome do
produto deve ser lido no main e passado como par�metro. No main, fazer a
chamada dessa fun��o e posteriormente imprimir os dados do produto
buscado, utilizando-se a fun��o imprimir_um_produto. Se retornou -1,
imprimir no main mensagem.
c. Fun��o: Aumentar em 10% o pre�o de todos os produtos. No main chamar
a fun��o e de forma repetida, imprimir os dados de todos os produtos */


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

void prodBuscaMaiorMenor(produto *produtos, int *p1, int *p2, int N) {
    float maior, menor;

    maior = produtos[0].preco;
    menor = produtos[0].preco;

    for (int i = 0; i < N; i++){
        if(produtos[i].preco > maior){
            maior = produtos[i].preco;
            *p1 = i;
        }else
			if(produtos[i].preco < menor){
	            menor = produtos[i].preco;
	            *p2 = i;
        	}
    }
}

int prodBuscaNome(produto *produtos, char prodNome[100], int N){
	
	int p;
	
	for(int i = 0; i < N; i++){
		
		if(strcmp(prodNome, produtos[i].nome) == 0){
			return i;
		}
	}
	return -1;
}

void aumenta(produto *produtos, int N){
	float aux;
	
	for(int i = 0; i < N; i++){
		
		cout << endl;
		cout << "Produto Codigo: " << produtos[i].codigo << endl;
		cout << "Produto Nome: " << produtos[i].nome << endl;
		aux = produtos[i].preco * 0.1;
		produtos[i].preco += aux;
		cout << "Produto Preco: " << produtos[i].preco << endl;
		cout << "Produto Quantidade: " << produtos[i].qtd << endl;
		cout << endl;
	}
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
	int N, cod, p, p1, p2, prodNomeInt;
	char prodNome[100];
	produto *produtos;
	
	ler(&produtos, &N);
	cout << endl;
	cout << "Digite o Codigo: ";
	cin >> cod;
	p = prodBusca(produtos, cod, N);
	imprime(produtos, p);
	
	prodBuscaMaiorMenor(produtos, &p1, &p2, N);
	cout << "Maior: " << endl;
	imprime(produtos, p1);
	cout << "Menor: " << endl;
	imprime(produtos, p2);
	
	cout << endl;
	cout << "Digite o nome do produto: ";
	cin.ignore();
	cin.getline(prodNome, 100);
	prodNomeInt = prodBuscaNome(produtos, prodNome, N);
	cout << endl;
	imprime(produtos, prodNomeInt);
	aumenta(produtos, N);
	free(produtos);
}
