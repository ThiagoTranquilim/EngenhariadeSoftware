#include <iostream>

using namespace std;

/* Fazer um programa que faz a leitura de dois vetores X e Y, ambos com N inteiros (N
deverá ser lido). Gera um terceiro vetor Z, da seguinte forma: nas posições pares de Z
armazenar os valores das posições pares de X e nas posições ímpares de Z, armazenar os
valores das posições ímpares de Y. Imprimir os vetores lidos, X e Y e, o vetor Z */

int main(){
	int N;
	
	cout << "Digite a quantidade do vetor: ";
	cin >> N;
	int vet[N], vet2[N], t[N];
	
	cout << "\n ----- Vetor 1 -----\n";
	for(int i = 0; i < N; i++){
		cout << "[ " << i << " ] = ";
		cin >> vet[i];
	}
	
	cout << "\n ----- Vetor 2 -----\n";
	for(int i = 0; i < N; i++){
		cout << "[ " << i << " ] = ";
		cin >> vet2[i];
	}
	
	for(int i = 0; i < N; i++){
		
		if(i % 2 == 0){
			t[i] = vet[i];
		}else
			t[i] = vet2[i];
	}
	
	cout << "\n ----- Vetor 1 -----\n";
	for(int i = 0; i < N; i++){
		cout << " " << vet[i];
	}
	
	cout << "\n ----- Vetor 2 -----\n";
	for(int i = 0; i < N; i++){
		cout << " " << vet2[i];
	}
	cout << "\n ----- Total -----\n";
	for(int i = 0; i < N; i++){
		cout << " " << t[i];
	}
}
