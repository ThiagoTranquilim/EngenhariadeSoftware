#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

/* Escreva um programa que crie uma struct aluno (ra � inteiro; nome � string; nota �
real) aloca dinamicamente n posi��es, para receber as informa��es de n alunos.
Calcular o valor m�dio das notas. Imprimir todos os dados dos alunos e o valor
encontrado. O programa deve ter a seguinte divis�o de m�dulos:
a. Fun��o1: ler N, alocar dinamicamente o espa�o para os alunos, ler as
informa��es. Comunicar as informa��es pelo return e o N pela lista de
par�metros;
b. Fun��o2: receber o valor de N, os valores dos alunos e calcular o valor
m�dio das notas. A comunica��o do valor m�dio deve ser pelo return;
c. Fun��o3: receber o valor de N, os valores dos alunos e fazer a impress�o de
todos os alunos no formato de tabela;
d. main: declarar as vari�veis do problema, chamar as fun��es e imprimir o
valor m�dio */

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
