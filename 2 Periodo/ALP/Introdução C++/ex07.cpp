#include <iostream>

using namespace std;

int main(){
	
	/*Construir um programa que calcula a solução x e y de um sistema de equações lineares do tipo:
	ax + by = c
	dx + ey = f
	O programa deverá ler valores para os coeficientes (a, b, c, d, e, f) , calcular os valores de x e y. Imprimir os
	valores lidos e os valores calculados.*/
	
	int a, b, c, d, e, f;
	float x, y;
	
	cout << "Digite o valor de a: ";
	cin >> a;
	cout << "Digite o valor de b: ";
	cin >> b;
	cout << "Digite o valor de c: ";
	cin >> c;
	cout << "Digite o valor de d: ";
	cin >> d;
	cout << "Digite o valor de e: ";
	cin >> e;
	cout << "Digite o valor de f: ";
	cin >> f;
	
	x = ((c*e) - (b*f)) / ((a*e) - (b*d));
	y = ((a*f) - (c*d)) / ((a*e) - (b*d));
	
	cout << "O valor de a: " << a << "\n";
	cout << "O valor de b: " << b << "\n";
	cout << "O valor de c: " << c << "\n";
	cout << "O valor de d: " << d << "\n";
	cout << "O valor de e: " << e << "\n";
	cout << "O valor de f: " << f << "\n";
	cout << "O valor de x: " << x << "\n";
	cout << "O valor de y: " << y << "\n";
	
	return 0;
}
