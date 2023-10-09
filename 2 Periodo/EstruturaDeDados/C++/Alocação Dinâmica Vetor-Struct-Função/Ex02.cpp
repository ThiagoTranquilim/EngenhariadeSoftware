#include <iostream>
#include <cstdlib>

using namespace std;

/* Escreva um programa que crie um vetor dinâmico para reais, representando as
notas de alunos, de n posições. Verificar a nota que mais se repete. Caso tenha mais de
uma delas que se repete, escolher a maior entre elas. Por exemplo, num conjunto de
N=50 notas, supor que as notas: 8,5 e 5,5 são as notas que mais se repetem, por
exemplo, ambas repetem 15 vezes. Então escolher, a nota 8,5. Imprimir os elementos
do vetor e a nota que mais se repete. O programa deve ter a seguinte divisão de
módulos:
função 1: ler N, alocar dinamicamente o vetor de N reais, ler as informações do
vetor. Comunicar o vetor pelo return e o N pela lista de parâmetros;
função 2: receber o valor de N, os valores do vetor e encontra a nota que mais
se repete. A comunicação dessa nota deve ser pelo return;
função 3: receber o valor de N, os valores do vetor e faz a impressão do vetor;
main: declarar as variáveis do problema, chamar as funções e imprimir a nota
que mais se repete encontrada, após a impressão dos elementos do vetor */

float* ler(int *N){
	
	cout << "Digite a quantidade de notas: ";
	cin >> *N;
	
	float *notas = (float*)calloc(*N, sizeof(float));
	
	for(int i = 0; i < *N; i++){
		cout << "[ " << i << " ] = ";
		cin >> notas[i];
	}
	
	return notas;
}

float* repete(float notas[], int N){
	int maxContagem = 0; 
	float *notaRepetida = NULL;

	for (int i = 0; i < N; i++) {
		int contagem = 1;

		// Verifica as ocorrências da nota atual no restante do vetor
		for (int j = i + 1; j < N; j++) {
			if (notas[i] == notas[j]) {
				contagem++;
			}
		}

		// Atualiza se a contagem da nota atual é maior que a contagem máxima
		if (contagem > maxContagem || (contagem == maxContagem && notas[i] > *notaRepetida)) {
			maxContagem = contagem;
			notaRepetida = &notas[i];
		}
	}

	return notaRepetida;
}

void imprime(float notas[], int N){
	
	for(int i = 0; i < N; i++){
		cout << "[ " << i << " ] = " << notas[i] << endl;
	}
}

int main(){
	int N;
	float *notas;
	float *repeteNota;
	
	notas = ler(&N);
	repeteNota = repete(notas, N);
	imprime(notas, N);
	
	cout << "Nota que mais se repete: " << *repeteNota;
	
	free(notas);
}
