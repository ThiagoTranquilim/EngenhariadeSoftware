#include <iostream>

using namespace std;

int main(){
	
	/*Construir um programa que faz a leitura de dois n�meros reais, representando notas de um aluno. Calcula a
	m�dia ponderada, sendo peso 4 na primeira e 6 na segunda nota digitada. Imprime os valores lidos e a
	m�dia calculada.*/
	
	float nota1, nota2, media;
	
	cout << "Digite a nota 1: ";
	cin >> nota1;
	cout << "Digite a nota 2: ";
	cin >> nota2;
	
	media = (4*nota1 + 6*nota2)/10;
	cout << "A nota 1 e: " << nota1 << "\n";
	cout << "A nota 2 e: " << nota2 << "\n";
	cout << "A media e: " << media << "\n";
	return 0;	
}
