#include <iostream>

using namespace std;

int main(){
	
	/*Fazer um programa que faz a leitura de dois números inteiros, diferentes de zero, representando: Dividendo
	e Divisor. Calcular o Quociente e o Resto da divisão do Dividendo pelo Divisor. Imprimir os quatro números
	inteiros: Dividendo e Divisor (lidos) e Quociente e Resto (calculados).*/
	
	int dividendo, divisor;
	float resto, quociente;
	
	cout << "Digite o dividendo: ";
	cin >> dividendo;
	cout << "Digite o divisor: ";
	cin >> divisor;
	
	quociente = dividendo / divisor;
	resto = dividendo % divisor;
	
	cout << "O dividendo e: " << dividendo << "\n";
	cout << "O divisor e: " << divisor << "\n";
	cout << "O quociente e: " << quociente << "\n";
	cout << "O resto e: " << resto << "\n";
	
	return 0;
}
