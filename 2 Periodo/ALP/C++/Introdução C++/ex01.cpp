#include <iostream>

using namespace std;

int main(){
	
	/*Construir um programa que faz a leitura de: dois n�meros inteiros, representando a altura e a base de um
	quadril�tero. Calcula a �rea do quadril�tero. Imprime: valores lidos e o calculado.*/
	
	int altura, base, area;
	
	cout << "Digite a altura: ";
	cin >> altura;
	cout << "Digite a base: ";
	cin >> base;
	
	area = base * altura;
	cout <<"A base e: " << base;
	cout <<"\nA altura e: " << altura;
	cout <<"\nA area e: " << area;
	
	return 0;
}
