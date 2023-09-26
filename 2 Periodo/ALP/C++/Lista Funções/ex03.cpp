#include <iostream>

using namespace std;

/* Construir um programa para calcular a potência de um número, isto é, calcular: x y (x
elevado a y), onde x e y são parâmetros da função O programa deverá ter a seguinte
divisão de módulos:
a) Função1: recebe pela lista de parâmetros os valores de x e y e, usando
obrigatoriamente, processo repetitivo (NÃO UTILIZAR A FUNÇÃO pow() ), calcular
o valor de x elevado à y. O resultado deve retornar pelo return.
PROTÓTIPO: float pot (float x, int y);
b) main() deverá ler os valores x e y, chamar a função que calcula a potência
passando os valores lidos e, imprime o valor retornado da função */

float pot(float x, int y){
	float aux = x;
	
	
	for(int i = 1; i < y; i++){
		x = x * aux;
	}
	
	return x;
}

int main(){
	float x, resultado;
	int y;
	
	cout << "Digite x: ";
	cin >> x;
	cout << "Digite y: ";
	cin >> y;
	
	resultado = pot(x, y);
	cout << "O resultado e: " << resultado;
	
}
