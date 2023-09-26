#include <iostream>

using namespace std;

/* Construir um programa que faz a leitura de dois conjuntos de N n�meros reais, armazena-
os em dois arranjos unidimensionais X e Y, (ambos os arranjos ter�o N elementos) e cria
um terceiro arranjo Z, tamb�m com N elementos, contendo em cada posi��o o maior
entre os elementos de X e Y de mesma posi��o. O programa dever� ter a seguinte divis�o
de fun��es:
fun��o1 que faz a leitura de N e dos N n�meros reais e os armazena num arranjo.
A comunica��o das informa��es lidas dever� ser pela lista de par�metros
(Observe que a fun��o dever� ler valores para um arranjo);
PROT�TIPO: void ler_vetor( float v[ ], int * n);
fun��o2 que recebe os valores de dois arranjos unidimensionais, ambos com N
elementos, (pela lista de par�metros) e faz a montagem do terceiro arranjo como
descrito acima. A comunica��o do terceiro arranjo dever� ser pela lista
de par�metros;
PONTIF�CIA UNIVERSIDADE CAT�LICA DE CAMPINAS - ESCOLA POLIT�CNICA
ENGENHARIA DE SOFTWARE
Algoritmos e Linguagem de Programa��o - ALP
PROT�TIPO: void monta_vetor ( float A[ ], float B[ ], float C[ ], int n);
fun��o3 que recebe pela lista de par�metros o valor de N e os valores do vetor e
imprime esses valores;
PROT�TIPO: void imprime_vetor( float v[ ], int n);
main() que define as vari�veis do problema e chama as fun��es definidas.
Observe que para ler os dois vetores, a fun��o1 � chamada DUAS vezes, uma para
cada uma das vari�veis arranjo. E, a fun��o3, que imprime um vetor, deve ser
chamada 3 vezes. Uma para cada um dos vetores: os 2 lidos e o criado com os
elementos dos dois */

void ler_vetor(float v[], int *N){
	
	for(int i = 0; i < *N; i++){
		cout << "[ " << i << " ] = ";
		cin >> v[i];
	}
}

void monta_arranjo(float v[], float y[], float final[], int N){
	
	for(int i = 0; i < N; i++){
		
		if(v[i] > y[i]){
			final[i] = v[i];
		}else
			final[i] = y[i];
	}
}

void imprime_vetor(float final[], int N){
	
	for(int i = 0; i < N; i++){
		cout << "[ " << i << " ] = " << final[i] << endl;
	}
}

int main(){
	int N;
	
	cout << "Digite o valor de N: ";
	cin >> N;
	float v[N], y[N], final[N];
	
	ler_vetor(v, &N);
	ler_vetor(y, &N);
	monta_arranjo(v, y, final, N);
	imprime_vetor(final, N);
}
