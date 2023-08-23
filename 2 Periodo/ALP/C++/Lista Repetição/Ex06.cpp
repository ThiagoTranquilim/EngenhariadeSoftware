#include <iostream>

using namespace std;

/* Ler 3 valores X, Y, Z representando os comprimentos dos lados de
um tri�ngulo. Verificar se eles podem ser os comprimentos dos lados
de um triangulo e, se forem, verificar se � um tri�ngulo equil�tero,
is�sceles ou escaleno. Se eles n�o formarem um tri�ngulo,
imprimir uma mensagem.
Antes de come�ar a elabora��o do programa, observe as
propriedades e defini��es:
� Propriedade: o comprimento de cada lado de um tri�ngulo �
menor do que a soma dos comprimentos dos outros dois lados.
� Defini��o 1: Chama-se tri�ngulo equil�tero ao triangulo que tem
os comprimentos dos tr�s lados iguais;
� Defini��o 2: Chama-se tri�ngulo is�sceles ao tri�ngulo que tem os
comprimentos de dois lados iguais. Portanto, todo tri�ngulo
equil�tero � tamb�m is�scele; */

int main(){
	int x, y, z;
	
	cin >> x;
	cin >> y;
	cin >> z;
	
	if((x + y > z) && (x + z > y) && (y + z > x)){
		if((x == y) && (x == z)){
			cout << "Triangulo Equilatero";
		}else
			if((x == y) || (x == z) || (y == z)){
				cout << "Triangulo isosceles";
			}else
				cout << "Triangulo escaleno";
	}else
		cout << "Os lados nao formam um triangulo";
}
