#include <iostream>
#include <string.h>

using namespace std;

/* Continuando o programa anterior, acrescente um trecho de código no programa que: verifica se o conjunto
está ordenado em ordem alfabética do nome. E, imprima uma mensagem se sim ou não */

struct Endereco{
	char rua[20];
	int numero;
	char cidade[20];
	char uf[3];
};

struct Clientes{
	
	char cpf[11];
	char nome[20];
	Endereco ende;
	int nmrFilhos;
};

int main(){
	int N;
	char cidadeBusca[20];
	bool ordenado = true;
	
	cout << "Digite a quantidade de clientes: ";
	cin >> N;
	Clientes cliente[N];
	
	cout << "\n----- Cadastro de Clientes -----\n";
	for(int i = 0; i < N; i++){
		
		cin.ignore();
		cout << "Digite o nome: ";
		cin.getline(cliente[i].nome, 20);
		cout << "Digite o cpf: ";
		cin.getline(cliente[i].cpf, 11);
		cout << "Digite o numero de filhos: ";
		cin >> cliente[i].nmrFilhos;
		cin.ignore();
		cout << "Digite a cidade: ";
		cin.getline(cliente[i].ende.cidade, 20);
		cout << "Digite a rua: ";
		cin.getline(cliente[i].ende.rua, 20);
		cout << "Digite o numero: ";
		cin >> cliente[i].ende.numero;
		cin.ignore();
		cout << "Digite o uf: ";
		cin.getline(cliente[i].ende.uf, 3);
		cout << "--------------------\n";
	}
	
	cout << "Digite a cidade busca: ";
	cin.getline(cidadeBusca, 20);
	
	
	cout << "----- " << cidadeBusca << " -----\n";
	for(int i = 0; i < N; i++){
		
		if(strcmp(cidadeBusca, cliente[i].ende.cidade) == 0){
			
			cout << "Nome: " << cliente[i].nome << endl;
			cout << "cpf: " << cliente[i].cpf << endl;
			cout << "Numero de filhos: " << cliente[i].nmrFilhos << endl;
			cout << "Cidade: " << cliente[i].ende.cidade << endl;
			cout << "--------------------\n";
		}
	}
	
	cout << "----- Ordem alfabetica -----\n";
	
	for(int i = 0; i < N - 1; i++){
		
		strlwr(cliente[i].nome);
		strlwr(cliente[i + 1].nome);
		
		if(cliente[i].nome[0] > cliente[i + 1].nome[0]){
			cout << "Conjunto nao ordenado";
			ordenado = false;
			break;
		}
	}
	
	if(ordenado == true){
		cout << "Conjunto ordenado";
	}
}
