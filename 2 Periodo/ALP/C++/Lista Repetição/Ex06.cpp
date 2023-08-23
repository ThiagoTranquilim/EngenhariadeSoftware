#include <iostream>

using namespace std;

/* Ler 3 valores X, Y, Z representando os comprimentos dos lados de
um triângulo. Verificar se eles podem ser os comprimentos dos lados
de um triangulo e, se forem, verificar se é um triângulo equilátero,
isósceles ou escaleno. Se eles não formarem um triângulo,
imprimir uma mensagem.
Antes de começar a elaboração do programa, observe as
propriedades e definições:
• Propriedade: o comprimento de cada lado de um triângulo é
menor do que a soma dos comprimentos dos outros dois lados.
• Definição 1: Chama-se triângulo equilátero ao triangulo que tem
os comprimentos dos três lados iguais;
• Definição 2: Chama-se triângulo isósceles ao triângulo que tem os
comprimentos de dois lados iguais. Portanto, todo triângulo
equilátero é também isóscele; */

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
