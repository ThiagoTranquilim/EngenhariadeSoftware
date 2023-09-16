#include <iostream>
#include <string.h>

using namespace std;

/* Continuando o programa anterior, acrescente mais um trecho de código no programa que: leia um cpf e
busque se o cliente, com este cpf, está na lista ou não. Se estiver, exclua os dados desse cliente. Para isso, é
necessário deslocar as informações que estão após esse cpf de busca, uma posição e diminuir UMA UNIDADE
de N, pois ficamos com um cliente a menos no conjunto. E, imprima os N-1 produtos, para demonstrar que os
dados do cliente não constam mais e os outros foram deslocados uma posição. (GD:5)
Exemplo: supor N = 10 e o conjunto de clientes lidos abaixo */

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
	char cidadeBusca[20], cpfBusca[11];
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
		cout << "Conjunto ordenado\n";
	}
	
	cout << "Digite o cpf a ser buscado: ";
	cin.ignore();
	cin.getline(cpfBusca, 11);
	
	
	cout << "----- " << cpfBusca << " -----\n";
	for(int i = 0; i < N; i++){
		
		if(strcmp(cpfBusca, cliente[i].cpf) == 0){
			
			for(int j = i; j < N; j++){
				
				strcpy(cliente[j].nome, cliente[j + 1].nome);
				strcpy(cliente[j].cpf, cliente[j + 1].cpf);
				cliente[j].nmrFilhos = cliente[j + 1].nmrFilhos;
				cliente[j].ende = cliente[j + 1].ende;
			}
			N--;
			break;
		}
	}
	
	for(int i = 0; i < N; i++){
		
		cout << "--------------------\n";
		cout << "Nome: " << cliente[i].nome << endl;
		cout << "cpf: " << cliente[i].cpf << endl;
		cout << "Numero de filhos: " << cliente[i].nmrFilhos << endl;
		cout << "Cidade: " << cliente[i].ende.cidade << endl;
		cout << "--------------------\n";
	}
}
