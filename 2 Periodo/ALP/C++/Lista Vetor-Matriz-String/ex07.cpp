#include <iostream>

using namespace std;

/* Fazer um programa que faz a leitura de um vetor X, com N n�mero inteiros (N dever� ser
lido). Calcula a somat�ria dos valores das posi��es �mpares do vetor. Imprimir o vetor lido
e a soma calculada */

int main(){
	int N, soma;
	
	cout << "Digite a quantidade do vetor: ";
	cin >> N;
	int vet[N];
	
	for(int i = 0; i < N; i++){
		cout << "[ " << i << " ] = ";
		cin >> vet[i];
		
		if(i % 2 != 0){
			soma += vet[i];
		}
	}
	
	for(int i = 0; i < N; i++){
		cout << " " << vet[i];
	}
	
	cout << "\n Soma: " << soma;
}
