#include <iostream>

using namespace std;

/* Fazer um programa que faz a leitura de um vetor com N inteiros (N deverá ser lido). Calcula
o somatório dos elementos múltiplos de 5 do vetor. Imprimir o vetor lido e o valor do
somatório.
O somatório é dado por: S = S + X[i]; para i = 0,1,2, ..., N-1 e se o X[i]%5 for igual a zero */

int main(){
	int N, soma = 0;
	
	cout << "Digite o valor da quantidade do vetor: ";
	cin >> N;
	int vet[N];
	
	for(int i = 0; i < N; i++){
		
		cout << "[ " << i << " ] = ";
		cin >> vet[i];
		
		if(vet[i] % 5 == 0){
			soma += vet[i];
		}
	}
	
	for(int i = 0; i < N; i++){
		cout << vet[i] << " ";
	}
	
	cout << endl << "Soma: " << soma;
	
	return 0;
}
