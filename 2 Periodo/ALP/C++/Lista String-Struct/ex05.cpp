#include <iostream>
#include <cstring>

using namespace std;

/* Construir um programa que faz a leitura de informações de N clientes de uma empresa (cpf: string, nome:
string, endereço: struct, número_filhos: int) e imprime apenas os clientes que são de uma determinada cidade,
que deverá ser lida. Para testar se a pessoa é de “Campinas”, por exemplo, é necessário definir uma struct
separada para endereço, como apresentado na aula. Primeiro defina as structs: endereço e cliente. Faça a
leitura de N e declare o vetor de struct cliente. Faça a leitura das informações de N clientes. Faça a leitura de
uma cidade de busca e imprima os dados dos clientes que são da cidade buscada. Para o exercício, considere
para a struct endereço, apenas os campos: rua: string, número: int, cidade: string e uf: string */

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
