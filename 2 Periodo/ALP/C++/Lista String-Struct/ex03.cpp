#include <iostream>
#include <iomanip>

using namespace std;

/* Construir um programa que faz a leitura de informações de N produtos: (código: inteiro, nome: string, preço:
real e quantidade_estoque: inteiro) e imprime apenas os produtos que estão com a quantidade em estoque
zerada. Primeiro deverá ser definida uma struct para o produto. Fazer a leitura de informações de N produtos
(N deverá ser lido) armazenando-as num vetor de struct. Após a leitura e armazenamento dos dados de N
produtos. Imprimir os dados(TODOS), apenas dos produtos, cuja quantidade em estoque seja igual a zero.
Imprima no formato de uma tabela. */

struct Produtos{
	int codigo;
	char nomes[10];
	float preco;
	int quantidadeEstoque;
};

int main(){
	int N;
	
	cout << "Digite a quantidade de produtos: ";
	cin >> N;
	Produtos prod[N];
	
	for(int i = 0; i < N; i++){
		
		cout << "----- Produto " << i << " -----\n";
		cout << "Codigo: ";
		cin >> prod[i].codigo;
		cin.ignore();
		cout << "Nome: ";
		cin.getline(prod[i].nomes, 10);
		cout << "Preco: ";
		cin >> prod[i].preco;
		cout << "Quantidade em estoque: ";
		cin >> prod[i].quantidadeEstoque;
		cout << "----------\n";
	}
	
	cout << "\n Quantidade em estoque 0";
	cout << "\n--------------------\n";
	cout << "Codigo\tNome\tPreco\n";
	for(int i = 0; i < N; i++){
		
		if(prod[i].quantidadeEstoque == 0){
			
			cout << "\n " << setfill('0') << setw(4) << prod[i].codigo;
			cout << "\t " << setfill(' ') << setw(4) << prod[i].nomes;
			cout << fixed << setw(8) << setprecision(2) << right << prod[i].preco;
		}
	}
}
