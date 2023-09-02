#include <iostream>

using namespace std;

/* Fazer um programa que faz a leitura de dois vetores, ambos com N inteiros (N deverá ser
lido). Intercala os elementos destes dois vetores formando um terceiro vetor com o dobro
do tamanho, 2*N. Imprimir os vetores lidos e o vetor com a intercalação.
A intercalação é dada por: Z[j++] = X[i];
Z[j++] = Y[i]; para i = 0, 1, 2, ..., N-1 e com j inicializado com 1 */

int main(){
	int N;
	
	cout << "Digite a quantidade dos vetores: ";
	cin >> N;
	
	int vet[N], vet2[N], t[2 * N];
	
	cout << "----- Vetor 1 -----" << endl;
	for(int i = 0; i < N; i++){
		
		cout << "[ " << i << " ] = ";
		cin >> vet[i];
	}
	
	cout << "----- Vetor 2 -----" << endl;
	for(int i = 0; i < N; i++){
		
		cout << "[ " << i << " ] = ";
		cin >> vet2[i];
	}
	
	for(int i = 0, j = 0; i < N; i++){
		t[j++] = vet[i];
		t[j++] = vet2[i];
	}
	
	cout << "\n----- Vetor 1 -----\n";
	
	for(int i = 0; i < N; i++){
		
		cout << vet[i] << " ";
	}
	
	cout << "\n\n----- Vetor 2 -----\n";
	
	for(int i = 0; i < N; i++){
		
		cout << vet2[i] << " ";
	}
	
	cout << "\n\n----- Vetor 3 -----\n";
	
	for(int i = 0; i < 2 * N; i++){
		
		cout << t[i] << " ";
	}
}
