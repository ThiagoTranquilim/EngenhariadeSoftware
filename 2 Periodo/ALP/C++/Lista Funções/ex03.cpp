#include <iostream>

using namespace std;

/* Construir um programa para calcular a pot�ncia de um n�mero, isto �, calcular: x y (x
elevado a y), onde x e y s�o par�metros da fun��o O programa dever� ter a seguinte
divis�o de m�dulos:
a) Fun��o1: recebe pela lista de par�metros os valores de x e y e, usando
obrigatoriamente, processo repetitivo (N�O UTILIZAR A FUN��O pow() ), calcular
o valor de x elevado � y. O resultado deve retornar pelo return.
PROT�TIPO: float pot (float x, int y);
b) main() dever� ler os valores x e y, chamar a fun��o que calcula a pot�ncia
passando os valores lidos e, imprime o valor retornado da fun��o */

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
