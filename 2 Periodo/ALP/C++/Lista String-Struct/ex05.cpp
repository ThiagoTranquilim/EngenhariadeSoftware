#include <iostream>
#include <cstring>

using namespace std;

/* Construir um programa que faz a leitura de informa��es de N clientes de uma empresa (cpf: string, nome:
string, endere�o: struct, n�mero_filhos: int) e imprime apenas os clientes que s�o de uma determinada cidade,
que dever� ser lida. Para testar se a pessoa � de �Campinas�, por exemplo, � necess�rio definir uma struct
separada para endere�o, como apresentado na aula. Primeiro defina as structs: endere�o e cliente. Fa�a a
leitura de N e declare o vetor de struct cliente. Fa�a a leitura das informa��es de N clientes. Fa�a a leitura de
uma cidade de busca e imprima os dados dos clientes que s�o da cidade buscada. Para o exerc�cio, considere
para a struct endere�o, apenas os campos: rua: string, n�mero: int, cidade: string e uf: string */

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
}
