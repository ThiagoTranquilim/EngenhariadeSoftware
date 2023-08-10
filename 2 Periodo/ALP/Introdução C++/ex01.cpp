#include <iostream>

using namespace std;

int main(){
	
	/*Construir um programa que faz a leitura de: dois números inteiros, representando a altura e a base de um
	quadrilátero. Calcula a área do quadrilátero. Imprime: valores lidos e o calculado.*/
	
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
