#include <iostream>
#include <iomanip>

using namespace std;

/* Fazer um programa que faz a leitura de uma matriz de inteiros A, de dimensão NxM (os
valores de N e M devem ser lidos). Calcula e imprime a somatória dos elementos da K-ésima
linha da matriz, onde K deve ser lido */

int main(){
	int N, M, K;
	
	cout << "Digite os valores da dimensao da matriz NxM: ";
	cin >> N >> M;
	int mat[N][M];
	
	for(int i = 0; i < N; i++){
		for(int j = 0; j < M; j++){
			
			cout << "[ " << i << " ][ " << j << " ] = ";
			cin >> mat[i][j];
		}
	}
	
	cout << "\nDigite o valor de K: ";
	cin >> K;
	
	if(K > 0 && K < N){
		cout << "----- Linha " << K << "-----\n";
		for(int j = 0; j < M; j++){
			
			cout << setw(5) << mat[K][j];
		}
	}else
		cout << "K esta fora dos limites das linhas";
	
}
