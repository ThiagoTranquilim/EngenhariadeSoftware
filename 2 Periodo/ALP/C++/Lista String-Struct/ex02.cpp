#include <iostream>
#include <string.h>

using namespace std;

/* Construir um programa que faça a leitura de N nomes de pessoas, onde N deve ser lido. Armazenar os nomes
das pessoas num vetor de string: char nomes [N][51]. Após a leitura dos N nomes, verificar se há homônimos
na lista. Imprimir o(s) nomes homônimos */

int main(){
	int N, comp;
	
	cout << "Digite a quantidade de pessoas: ";
	cin >> N;
	cin.ignore();
	char nomes[N][51], homonimos[N][51] = {0};
	
	for(int i = 0; i < N; i++){
		
		cout << "Digite o nome a ser adicionado na lista: ";
		cin.getline(nomes[i], 51);
	}
	
	
	int homonimosCont = 0;
	for(int i = 0; i < N; i++){
		
		comp = 0;
		
		for(int j = 0; j < N; j++){
			
			if(strcmp(nomes[j], nomes[i]) == 0){
				comp++;
			}
		}
		
		if(comp > 1){
				strcpy(homonimos[homonimosCont], nomes[i]);
				homonimosCont++;
			}
	}
	
	for(int i = 0; i < homonimosCont; i++){
		cout << homonimos[i] << endl;
	}
}
