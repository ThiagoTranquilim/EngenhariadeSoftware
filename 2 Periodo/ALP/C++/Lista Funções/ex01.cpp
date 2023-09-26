#include <iostream>

using namespace std;

/* Construir um programa que calcula o volume do cilindro. O seu programa deve fazer a
leitura do raio da base circular e da altura do cilindro. Use o valor de PI = 3,14. Imprimir o
valor do volume calculado.
Volume � dado por: pir^2h
O programa dever� ter a seguinte divis�o de m�dulos:
a. fun��o1: que recebe os valores: do raio da base circular e da altura do cilindro e
calcula o volume do cilindro. O valor do volume calculado, deve retornar
pelo return;
Prot�tipo da fun��o: float volume_cilindro ( float raio, float alt);
b. main: faz a leitura do raio da base circular e da altura do cilindro, chama a fun��o,
passando os valores lidos e imprime o valor do volume do cilindro, retornado da fun��o */

#define PI 3.14

float calcVolume(float raio, float altura){
	float volume;
	
	volume = PI * raio * raio * altura;
	return volume;
}

int main(){
	float raio, altura, volume;
	
	cout << "Digite o raio da base: ";
	cin >> raio;
	cout << "Digite a altura: ";
	cin >> altura;
	
	volume = calcVolume(raio, altura);
	
	cout << "O volume e: " << volume << endl;
	
}
