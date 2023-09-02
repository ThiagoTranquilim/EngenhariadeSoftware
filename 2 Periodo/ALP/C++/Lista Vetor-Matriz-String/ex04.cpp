#include <iostream>

using namespace std;

/* Fazer um programa que faz a leitura de um vetor com N inteiros (N deverá ser lido). Gera
um segundo vetor com os valores de vetor lido em ordem inversa. Imprimir o vetor lido e o
vetor com a ordem inversa.
Vetor lido = 1 | 2 | 3 | 4 | 5 | 6 |7 | 8 | 9 |
Vetor invertido = 9 | 8 | 7 | 6 | 5 | 4 | 3 | 2 | 1 | */

int main(){
	int N, K;
	
	cout << "Digite o valor da quantidade do vetor: ";
	cin >> N;
	int vet[N], vet2[N];
	
	K = N - 1;
	for(int i = 0; i < N; i++){
		
		cout << "[ " << i << " ] = ";
		cin >> vet[i];
		vet2[K--] = vet[i];
	}
	
	cout << "\n ----- Vetor 1 -----\n";
	for(int i = 0; i < N; i++){
		
		cout << vet[i] << " ";
	}
	
	cout << "\n ----- Vetor 2 -----\n";
	for(int i = 0; i < N; i++){
		
		cout << vet2[i] << " ";
	}
}
