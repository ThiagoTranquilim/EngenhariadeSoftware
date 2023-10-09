#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

/* Escreva um programa que crie uma struct aluno (ra – inteiro; nome – string; nota –
real) aloca dinamicamente n posições, para receber as informações de n alunos.
Calcular o valor médio das notas. Imprimir todos os dados dos alunos e o valor
encontrado. O programa deve ter a seguinte divisão de módulos:
a. Função1: ler N, alocar dinamicamente o espaço para os alunos, ler as
informações. Comunicar as informações pelo return e o N pela lista de
parâmetros;
b. Função2: receber o valor de N, os valores dos alunos e calcular o valor
médio das notas. A comunicação do valor médio deve ser pelo return;
c. Função3: receber o valor de N, os valores dos alunos e fazer a impressão de
todos os alunos no formato de tabela;
d. main: declarar as variáveis do problema, chamar as funções e imprimir o
valor médio */

typedef struct{
	int RA;
	char nome[100];
	float nota;
}aluno;

aluno* ler(int *N){
	
	cout << "Digite o valor de N: ";
	cin >> *N;
	
	aluno *alunos = (aluno*)calloc(*N, sizeof(aluno));
	
	for(int i = 0; i < *N; i++){
		cout << "Aluno [" << i <<"] RA: ";
		cin >> alunos[i].RA;
		cout << "Aluno [" << i <<"] nome: ";
		cin.ignore();
		cin.getline(alunos[i].nome, 100);
		cout << "Aluno [" << i <<"] nota: ";
		cin >> alunos[i].nota;
	}
	
	return alunos;
}


float media(aluno alunos[], int N){
	float nota = 0;
	
	for(int i = 0; i < N; i++){
		
		nota += alunos[i].nota;
	}
	
	nota = nota / N;
	return nota;
}

void imprime(aluno alunos[], int N){
	
	cout << setw(5) << left << "RA:" << setw(15) << left << "Nome:" << setw(5) << left << "Nota:" << endl;

    for (int i = 0; i < N; i++) {
        cout << setw(5) << left << alunos[i].RA << setw(15) << left << alunos[i].nome << setw(5) << left << alunos[i].nota << endl;
    }
}

int main(){
	int N;
	float notaMedia;
	aluno *alunos;
	
	alunos = ler(&N);
	notaMedia = media(alunos, N);
	imprime(alunos, N);
	cout << " Nota media: " << notaMedia;
}
