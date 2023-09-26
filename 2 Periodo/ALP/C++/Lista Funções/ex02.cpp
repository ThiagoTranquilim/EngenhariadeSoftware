#include <iostream>

using namespace std;

/* Construir um programa que calcula o comprimento de um arco, com angulo central em
graus. O seu programa deve fazer a leitura do raio da circunferência e do angulo em graus.
Use o valor de PI = 3,14. Imprimir o valor calculado.
Comprimento é dado por:
O programa deverá ter a seguinte divisão de módulos:
a. função1: que recebe os valores: do raio da circunferência e do angulo em graus e,
calcula o comprimento de um arco. O valor do comprimento de um arco
calculado, deve retornar pelo return;
Protótipo da função: float comp_arco (float raio, float ang);
b. main: declara as variáveis do problema, faz a leitura do raio da circunferência e do
angulo em graus, chama a função, passando os valores lidos e, imprime o valor do
comprimento de um arco, retornado da função */

#define PI 3.14

float compArco(float raio, float angulo){
	float comprimento;
	
	comprimento = (angulo * PI * raio) / 180;
	
	return comprimento;
}

int main(){
	float raio, angulo, comprimento;
	
	cout << "Digite o raio: ";
	cin >> raio;
	cout << "Digite o angulo: ";
	cin >> angulo;
	
	comprimento = compArco(raio, angulo);
	cout << "O comprimento e: " << comprimento;
	
}
