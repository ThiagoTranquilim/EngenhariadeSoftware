#include <iostream>

using namespace std;

int main(){
	
	/*Construir um programa que que faz a leitura de uma temperatura em Fahrenheit e calcula o respectivo valor
	em Celsius. Use a fórmula de conversão: C = 5 * (F - 32) / 9*/
	
	float F, C;
	
	cout << "Digite a temperatura em Fahrenheit: ";
	cin >> F;
	C = (5* (F-32))/9;
	cout << "A temperatura em Celsius e: " << C;
	
	
	return 0;
}
