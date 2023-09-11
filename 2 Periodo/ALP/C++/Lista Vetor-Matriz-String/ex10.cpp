#include <iostream>
#include <iomanip>

using namespace std;

/* Fazer um programa que faz a leitura de uma matriz de inteiros A, de dimensão NxM (os
valores para N e M devem ser lidos). Calcula e imprime a somatória dos elementos pares da
matriz. Imprimir a matriz lida e o valor somado */

int main(){
	int N, M, soma = 0;
	
	cout << "Digite as dimensoes da matriz NxM: ";
	cin >> N >> M;
	int mat[N][M];
	
	for(int i = 0; i < N; i++){
		for(int j = 0; j < M; j++){
			
			cout << "[ " << i << " ][ " << j << " ] = ";
			cin >> mat[i][j];
			
			if(mat[i][j] % 2 == 0){
				soma += mat[i][j];
			}
		}
	}
	
	for(int i = 0; i < N; i++){
		
		cout << endl;
		for(int j = 0; j < M; j++){
			cout << setw(5) << mat[i][j];
		}
	}
	
	cout << "\nSoma: " << soma;
}
