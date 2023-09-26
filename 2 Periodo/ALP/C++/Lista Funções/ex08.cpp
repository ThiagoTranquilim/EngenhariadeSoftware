#include <iostream>

using namespace std;

/* Construir um programa que faz a leitura de dois conjuntos de N números reais, armazena-
os em dois arranjos unidimensionais X e Y, (ambos os arranjos terão N elementos) e cria
um terceiro arranjo Z, também com N elementos, contendo em cada posição o maior
entre os elementos de X e Y de mesma posição. O programa deverá ter a seguinte divisão
de funções:
função1 que faz a leitura de N e dos N números reais e os armazena num arranjo.
A comunicação das informações lidas deverá ser pela lista de parâmetros
(Observe que a função deverá ler valores para um arranjo);
PROTÓTIPO: void ler_vetor( float v[ ], int * n);
função2 que recebe os valores de dois arranjos unidimensionais, ambos com N
elementos, (pela lista de parâmetros) e faz a montagem do terceiro arranjo como
descrito acima. A comunicação do terceiro arranjo deverá ser pela lista
de parâmetros;
PONTIFÍCIA UNIVERSIDADE CATÓLICA DE CAMPINAS - ESCOLA POLITÉCNICA
ENGENHARIA DE SOFTWARE
Algoritmos e Linguagem de Programação - ALP
PROTÓTIPO: void monta_vetor ( float A[ ], float B[ ], float C[ ], int n);
função3 que recebe pela lista de parâmetros o valor de N e os valores do vetor e
imprime esses valores;
PROTÓTIPO: void imprime_vetor( float v[ ], int n);
main() que define as variáveis do problema e chama as funções definidas.
Observe que para ler os dois vetores, a função1 é chamada DUAS vezes, uma para
cada uma das variáveis arranjo. E, a função3, que imprime um vetor, deve ser
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
