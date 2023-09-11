#include <iostream>
#include <iomanip>

using namespace std;

/* Uma matriz A é simétrica se:
1º.) ela tiver dimensão NxN;
2º.) A[i][j] for igual a A[j][i]
Fazer um programa que faz a leitura de uma matriz de inteiros A, de dimensão NxN (N deve
ser lido). Imprime a matriz lida e uma mensagem se ela é simétrica ou não */

int main(){
	int N;
	bool simetrica = true;
	
	cout << "Digite o valor da dimensao da matriz: ";
	cin >> N;
	int mat[N][N];
	
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			cout << "[ " << i << " ][ " << j << " ] = ";
			cin >> mat[i][j];
		}
	}
	
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			
			if(mat[i][j] != mat[j][i]){
				simetrica = false;
			}
		}
	}
	
	for(int i = 0; i < N; i++){
		
		cout << endl;
		for(int j = 0; j < N; j++){
			cout << setw(5) << mat[i][j];
		}
	}
	
	if(simetrica){
		cout << "\nSimetrica";
	}else
		cout << "\nAssimetrica";
}
