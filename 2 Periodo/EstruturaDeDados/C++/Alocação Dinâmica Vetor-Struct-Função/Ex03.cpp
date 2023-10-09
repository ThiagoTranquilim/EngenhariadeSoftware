#include <iostream>
#include <cstdlib>

using namespace std;

/* Escreva um programa que crie um vetor din�mico para reais, representando as
notas de alunos, de n posi��es. Supor que as notas aceitas s�o inteiras ou com
parte fracion�ria 0,5. Isto �, n�o tem parte fracion�ria com outros valores.
Acrescenta 0,5 ponto para todas as notas com valor quebrado. Imprimir os
elementos do vetor duas vezes, como lido e depois de alterados os valores. O
programa deve ter a seguinte divis�o de m�dulos:
a. fun��o 1: ler N, alocar dinamicamente o vetor, ler as informa��es do vetor.
Comunicar o vetor e o N pela lista de par�metros;
b. fun��o 2: receber o valor de N, os valores do vetor, acrescentar 0,5 ponto
somente nas notas quebradas.
c. fun��o 3: receber o valor de N, os valores do vetor e faz a impress�o do
vetor;
d. main: declarar as vari�veis do problema; chama a fun��o1 para as leituras;
a fun��o3 para a impress�o dos elementos lidos; a fun��o2 para a altera��o
das notas quebradas e novamente a fun��o3, agora, com as notas
alteradas. N�o definir dois vetores, apenas um, A altera��o das notas
dever� ser feita no pr�prio vetor lido */

void ler(float **vetor, int *N){
	
	cout << "Digite o valor de N: ";
	cin >> *N;
	*vetor = (float*)calloc(*N, sizeof(float));
	
	for(int i = 0; i < *N; i++){
		cout << "[ " << i << " ] = ";
		cin >> (*vetor)[i];
	}
}

void addPonto(float **vetor, int N){
	
	for(int i = 0; i < N; i++){
		(*vetor)[i] += 0.5;
	}
}

void imprime(float *vetor, int N){
	
	for(int i = 0; i < N; i++){
		cout << "[ " << i << " ] = " << vetor[i] << endl;
	}
}

int main(){
	int N;
	float *vetor;
	
	ler(&vetor, &N);
	addPonto(&vetor, N);
	imprime(vetor, N);
}
