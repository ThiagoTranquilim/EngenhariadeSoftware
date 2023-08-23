#include <iostream>

using namespace std;

/* Escrever um programa que faz a leitura de N números inteiros, na
variável X. Imprimir o maior número digitado. O valor de N também
deve ser lido. Não usar vetor para a solução do problema */

int main(){
	int N, X, maior;
	
	cin >> N;
	
	maior = N;
	for(int i=0; i < N; i++){
		cin >> X;
		
		if(X > maior){
			maior = X;
		}
	}
	cout << maior;
	
	return 0;
}
