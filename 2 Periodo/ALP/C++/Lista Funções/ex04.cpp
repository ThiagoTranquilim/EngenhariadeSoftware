#include <iostream>

using namespace std;

/* Construir um programa que recebe um valor real representando a temperatura
em Fahrenheit e calcula o respectivo valor em Celsius . O programa dever� ter a seguinte
divis�o de m�dulos:
a) Fun��o1: recebe pela lista de par�metros o valor da temperatura em Fahrenheit,
calcula o valor em Celsius . O valor em Celsius dever� retornar atrav�s do return.
PROT�TIPO: float converte (float F);
b) main() dever� ler da temperatura em Fahrenheit, chamar a fun��o que calcula o
valor em Celsius passando o valor lido e, imprime o valor retornado da fun��o */

float converte(float fahrenheit){
	float celsius;
	
	celsius = (fahrenheit - 32) / 1.8;
	
	return celsius;
}

int main(){
	float fahrenheit, celsius;
	
	cout << "Digite a temperatura em Fahrenheit: ";
	cin >> fahrenheit;
	
	celsius = converte(fahrenheit);
	cout << "A temperatura em Celsius e: " << celsius;
}
