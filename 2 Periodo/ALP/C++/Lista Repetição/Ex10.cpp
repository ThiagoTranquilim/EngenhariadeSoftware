#include <iostream>

using namespace std;

/* Escrever um programa que faz a leitura de N n�meros inteiros, na
vari�vel X. Imprimir o maior n�mero digitado. O valor de N tamb�m
deve ser lido. N�o usar vetor para a solu��o do problema */

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
