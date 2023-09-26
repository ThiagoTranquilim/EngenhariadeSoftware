#include <iostream>

using namespace std;

/* Construir um programa que faz a leitura de N números inteiros, armazena-os em um
arranjo unidimensional X e monta um segundo arranjo unidimensional Y, também de N
elementos, da seguinte forma:
Yi =
xi2 se xi < 0
xi se xi = 0
2xi se xi > 0
O programa deverá ter a seguinte divisão de funções:
função1 que faz a leitura do N e dos N números inteiros e os armazena no arranjo. A
comunicação das informações lidas deverá ser pela lista de parâmetros.
PROTÓTIPO: void ler_vetor( float v[ ], int * n);
uma função2 que recebe os N valores de um arranjo unidimensional (pela lista
de parâmetros) e constrói o segundo arranjo unidimensional, como definido acima. A
comunicação do segundo arranjo deverá ser pela lista de parâmetros.
PROTÓTIPO: void monta_vetor ( float A[ ], float B[ ], int n);
uma função3 que recebe pela lista de parâmetros valor de N e valores de um arranjo
unidimensional de inteiros e imprime esses valores.
PROTÓTIPO: void imprime_vetor( float v[ ], int n);
a função main() que define as variáveis do problema e chama as funções definidas.
Imprime os dois vetores: o lido e o construído */

void ler_vetor(float v[], int *N){
	
	for(int i = 0; i < *N; i++){
		cout << "[ " << i << " ] = ";
		cin >> v[i];
	}
}

void monta_vetor(float v[], float y[], int N){
	
	for(int i = 0; i < N; i++){
		
		if(v[i] < 0){
			y[i] = v[i] * v[i];
		}else
			if(v[i] == 0){
				y[i] = v[i];
			}else
				if(v[i] > 0){
					y[i] = 2 * v[i];
				}
			
	}
}

void imprime_vetor(float y[], int N){
	
	for(int i = 0; i < N; i++){
		cout << "[ " << i << " ] = " << y[i] << endl;
	}
}

int main(){
	int N;
	cout << " Digite o valor de N: ";
	cin >> N;
	float v[N], y[N];
	
	ler_vetor(v, &N);
	monta_vetor(v, y, N);
	imprime_vetor(y, N);
	
}
