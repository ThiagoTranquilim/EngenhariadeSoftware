#include <iostream>

using namespace std;

/* Fazer um programa que faz a leitura de um vetor X, com N número inteiros (N deverá ser
lido). Calcula a somatória dos valores das posições ímpares do vetor. Imprimir o vetor lido
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
