#include <iostream>

using namespace std;

/* Construir um programa que recebe um valor real representando a temperatura
em Fahrenheit e calcula o respectivo valor em Celsius . O programa deverá ter a seguinte
divisão de módulos:
a) Função1: recebe pela lista de parâmetros o valor da temperatura em Fahrenheit,
calcula o valor em Celsius . O valor em Celsius deverá retornar através do return.
PROTÓTIPO: float converte (float F);
b) main() deverá ler da temperatura em Fahrenheit, chamar a função que calcula o
valor em Celsius passando o valor lido e, imprime o valor retornado da função */

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
