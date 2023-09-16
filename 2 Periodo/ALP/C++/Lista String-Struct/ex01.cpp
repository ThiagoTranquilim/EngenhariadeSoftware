#include <iostream>
#include <string.h>

using namespace std;

/* Construir um programa que faça a leitura de N nomes de cidades, onde N deve ser lido. Armazenar os nomes
das cidades num vetor de string: char cidades [N][31]. Após a leitura dos N nomes, em um processo repetitivo:
ler o nome de uma cidade e verificar se o nome da cidade lido, pertence ou não ao conjunto de N nomes de
cidades. Interromper a leitura se for digitado ‘*’ no nome da cidade. Imprimir a mensagem: “Cidade “ <nome
da cidade lido> “consta da lista” ou ”não consta da lista” */

int main(){
	int N;
	bool encont;
	
	cout << "Digite a quantidade de cidades: ";
	cin >> N;
	cin.ignore();
	char cidades[N][31], cidade[31], cidadeBusca[31];
	
	for(int i = 0; i < N; i++){
		
		cout << "Digite a cidade a ser cadastrada: ";
		cin.getline(cidade, 31);
		strcpy(cidades[i], cidade);
	}
	
	do{
		
		cout << "Digite a cidade a ser buscada: ";
		cin.getline(cidadeBusca, 31);
		
		if(strcmp(cidadeBusca, "*") == 0){
			break;
		}else{
			for(int i = 0; i < N; i++){
				
				if(strcmp(cidadeBusca, cidades[i]) == 0){
					encont = true;
				}
			}
		}
		
		if(encont){
			cout << cidadeBusca << " consta na lista " << endl;
		}else
			cout << cidadeBusca << " nao consta na lista " <<endl;
		
	}while(strcmp(cidadeBusca, "*") != 0);
}
