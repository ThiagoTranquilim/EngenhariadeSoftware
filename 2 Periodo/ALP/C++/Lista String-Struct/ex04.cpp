#include <iostream>
#include <iomanip>

using namespace std;

/* Continuando o programa anterior, acrescente um trecho de código no programa que: aumente em 10% o preço
de todos os produtos. E, imprima os N produtos, agora com o preço aumentado */

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
	
	for(int i = 0; i < N; i++){
		
		prod[i].preco = (prod[i].preco * 0.1) + prod[i].preco;
	}
	
	cout << "Codigo\tNome\tPreco\tQuantidade\n";
	for(int i = 0; i < N; i++){
		
		cout << "\n " << setfill('0') << setw(4) << prod[i].codigo;
		cout << "\t " << setfill(' ') << setw(4) << prod[i].nomes;
		cout << fixed << setw(8) << setprecision(2) << right << prod[i].preco;
		cout << "\t " << setfill(' ') << setw(4) << prod[i].quantidadeEstoque;
	}
}
