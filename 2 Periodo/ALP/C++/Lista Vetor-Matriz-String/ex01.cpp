#include <iostream>
#include <iomanip>

using namespace std;

/* Fazer um programa que faz a leitura de um vetor com N inteiros (N deverá ser lido) e
multiplica cada elemento do vetor por um valor K (K também deverá ser lido). Imprimir o
vetor lido, o valor da variável K e o vetor multiplicado por K.
O produto por K é dado por: Y[i] = X[i] * K; para i=0,1,2, ...,N-1 */

int main(){
	int N, K;
	
	cout << "Digite o valor da quantidade do vetor: ";
	cin >> N;
	int vet[N], vet2[N];
	
	cout << "Digite o valor do K: ";
	cin >> K;
	
	for(int i = 0; i < N; i++){
		cout << "[ " << i << " ] = ";
		cin >> vet[i];
	}
	
	for(int i = 0; i < N; i++){
		vet2[i] = vet[i] * K;
	}
	
	for(int i = 0; i < N; i++){
		cout << setw(5) << vet2[i];
	}
	
	return 0;
}
