#include <iostream>

using namespace std;

/* Fazer um programa que faz a leitura de um vetor com N inteiros (N dever� ser lido) e, em
seguida, teste se os elementos armazenados est�o ou n�o em ordem crescente de valor.
Imprimir mensagem no final se ordenado ou n�o */

int main(){
	int N;
	bool ordem = true;
	
	cout << "Digite a quantidade do vetor: ";
	cin >> N;
	int vet[N];
	
	for(int i = 0; i < N; i++){
		cout << "[ " << i << " ] = ";
		cin >> vet[i];
		
		if(vet[i - 1] > vet[i]){
			ordem = false;
		}
	}
	
	if(ordem == false){
		cout << "\nVetor nao ordenado";
	}else
		cout << "\nVetor ordenado";
	
	
}
