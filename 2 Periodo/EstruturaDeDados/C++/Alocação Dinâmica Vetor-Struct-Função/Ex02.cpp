#include <iostream>
#include <cstdlib>

using namespace std;

/* Escreva um programa que crie um vetor din�mico para reais, representando as
notas de alunos, de n posi��es. Verificar a nota que mais se repete. Caso tenha mais de
uma delas que se repete, escolher a maior entre elas. Por exemplo, num conjunto de
N=50 notas, supor que as notas: 8,5 e 5,5 s�o as notas que mais se repetem, por
exemplo, ambas repetem 15 vezes. Ent�o escolher, a nota 8,5. Imprimir os elementos
do vetor e a nota que mais se repete. O programa deve ter a seguinte divis�o de
m�dulos:
fun��o 1: ler N, alocar dinamicamente o vetor de N reais, ler as informa��es do
vetor. Comunicar o vetor pelo return e o N pela lista de par�metros;
fun��o 2: receber o valor de N, os valores do vetor e encontra a nota que mais
se repete. A comunica��o dessa nota deve ser pelo return;
fun��o 3: receber o valor de N, os valores do vetor e faz a impress�o do vetor;
main: declarar as vari�veis do problema, chamar as fun��es e imprimir a nota
que mais se repete encontrada, ap�s a impress�o dos elementos do vetor */

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

		// Verifica as ocorr�ncias da nota atual no restante do vetor
		for (int j = i + 1; j < N; j++) {
			if (notas[i] == notas[j]) {
				contagem++;
			}
		}

		// Atualiza se a contagem da nota atual � maior que a contagem m�xima
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
