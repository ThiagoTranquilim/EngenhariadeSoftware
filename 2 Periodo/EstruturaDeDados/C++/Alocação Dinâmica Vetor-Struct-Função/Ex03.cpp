#include <iostream>
#include <cstdlib>

using namespace std;

/* Escreva um programa que crie um vetor dinâmico para reais, representando as
notas de alunos, de n posições. Supor que as notas aceitas são inteiras ou com
parte fracionária 0,5. Isto é, não tem parte fracionária com outros valores.
Acrescenta 0,5 ponto para todas as notas com valor quebrado. Imprimir os
elementos do vetor duas vezes, como lido e depois de alterados os valores. O
programa deve ter a seguinte divisão de módulos:
a. função 1: ler N, alocar dinamicamente o vetor, ler as informações do vetor.
Comunicar o vetor e o N pela lista de parâmetros;
b. função 2: receber o valor de N, os valores do vetor, acrescentar 0,5 ponto
somente nas notas quebradas.
c. função 3: receber o valor de N, os valores do vetor e faz a impressão do
vetor;
d. main: declarar as variáveis do problema; chama a função1 para as leituras;
a função3 para a impressão dos elementos lidos; a função2 para a alteração
das notas quebradas e novamente a função3, agora, com as notas
alteradas. Não definir dois vetores, apenas um, A alteração das notas
deverá ser feita no próprio vetor lido */

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
