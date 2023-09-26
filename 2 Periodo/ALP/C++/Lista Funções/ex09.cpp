#include <iostream>

using namespace std;

/* Construir um programa que faz a leitura de N n�meros inteiros, armazena-os em um
arranjo unidimensional X e monta um segundo arranjo unidimensional Y, tamb�m de N
elementos, da seguinte forma:
Yi =
xi2 se xi < 0
xi se xi = 0
2xi se xi > 0
O programa dever� ter a seguinte divis�o de fun��es:
fun��o1 que faz a leitura do N e dos N n�meros inteiros e os armazena no arranjo. A
comunica��o das informa��es lidas dever� ser pela lista de par�metros.
PROT�TIPO: void ler_vetor( float v[ ], int * n);
uma fun��o2 que recebe os N valores de um arranjo unidimensional (pela lista
de par�metros) e constr�i o segundo arranjo unidimensional, como definido acima. A
comunica��o do segundo arranjo dever� ser pela lista de par�metros.
PROT�TIPO: void monta_vetor ( float A[ ], float B[ ], int n);
uma fun��o3 que recebe pela lista de par�metros valor de N e valores de um arranjo
unidimensional de inteiros e imprime esses valores.
PROT�TIPO: void imprime_vetor( float v[ ], int n);
a fun��o main() que define as vari�veis do problema e chama as fun��es definidas.
Imprime os dois vetores: o lido e o constru�do */

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
