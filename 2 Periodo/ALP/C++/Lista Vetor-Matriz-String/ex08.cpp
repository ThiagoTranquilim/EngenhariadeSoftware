#include <iostream>
#include <iomanip>

using namespace std;

/* As notas das duas provas de ALP estão armazenadas em dois vetores P1 e P2. Considere que
as salas têm 15 alunos e escreva um programa que:
Leia as notas de todos os alunos para ambas as provas – armazenar em dois vetores;
Calcule e imprima a média de cada Aluno (P1 + 2*P2) /3 e armazene em um terceiro
vetor;
Calcule e imprima a média de toda a sala */

#define TAM 5

int main(){
	float P1[TAM], P2[TAM], media[TAM];
	
	cout << "----- Prova 1 -----\n";
	for(int i = 0; i < TAM; i++){
		cout << "Aluno " << i << " : ";
		cin >> P1[i];
	}
	
	cout << "\n----- Prova 2 -----\n";
	for(int i = 0; i < TAM; i++){
		cout << "Aluno " << i << " : ";
		cin >> P2[i];
	}
	
	for(int i = 0; i < TAM; i++){
		
		media[i] = (P1[i] + 2 * P2[i])/3;
	}
	
	cout << "\n----- Prova 1 -----\n";
	for(int i = 0; i < TAM; i++){
		cout << P1[i] << " ";
	}
	
	cout << "\n----- Prova 2 -----\n";
	for(int i = 0; i < TAM; i++){
		cout << P2[i] << " ";
	}
	
	cout << "\n----- Media -----\n";
	for(int i = 0; i < TAM; i++){
		cout << setprecision(2) << media[i] << " ";
	}
	
}
