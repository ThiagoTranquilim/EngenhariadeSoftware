#include <iostream>

using namespace std;

/* Construir um programa que calcula a solu��o x e y de um sistema de equa��es lineares do
tipo: ax + by = c
dx + ey = f � dada por:
O programa dever� ter a seguinte divis�o de fun��es:
a) Fun��o1: que faz a leitura dos coeficientes (a, b, c, d, e, f). A comunica��o das informa��es
lidas dever� ser pela lista de par�metros.
PROT�TIPO: void ler_coeficientes (int *a, int *b, int *c, int *d, int *e, int *f);
b) Fun��o2: que recebe os valores dos coeficientes (pela lista de par�metros) e calcula x e y.
A comunica��o do x e do y dever� ser pela lista de par�metros. Testar se n�o resulta em
divis�o por zero. Se resultar em zero, devolver pelo return o valor 0 (zero). Se n�o resultar
em divis�o por zero, devolver pelo return o valor 1 (um);
PROT�TIPO: int sistema (int a, int b, int c, int d, int e, int f, float*x, float *y);
c) Fun��o3 que recebe os valores dos coeficientes lidos, os de x y e o valor de retorno do
comando return (todos pela lista de par�metros) e imprime os coeficientes e de acordo
com o valor do return da fun��o anterior imprimir mensagem: �Sistema sem solucao" e
n�o imprimir x e y ou imprimir a solu��o do sistema;
PROT�TIPO: void imprime (int a, int b, int c, int d, int e, int f, float x, float y, int flag);
d) a fun��o main() que define as vari�veis do problema e chama as fun��es definidas */

void ler_coeficientes(int *a, int *b, int *c, int *d, int *e, int *f){
	cout << "a: ";
	cin >> *a;
	cout << "b: ";
	cin >> *b;
	cout << "c: ";
	cin >> *c;
	cout << "d: ";
	cin >> *d;
	cout << "e: ";
	cin >> *e;
	cout << "f: ";
	cin >> *f;
}

int sistema(int a, int b, int c, int d, int e, int f, float *x, float *y){
	
	if(((a * e) - (b * d)) == 0){
		return 0;
	}else{
		*x = ((c * e) - (b * f))/((a * e) - (b * d));
		*y = ((a * f) - (c * d))/((a * e) - (b * d));
		return 1;
	}
}

void imprime(int a, int b, int c, int d, int e, int f, float x, float y, int resultado){
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	cout << "c: " << c << endl;
	cout << "d: " << d << endl;
	cout << "e: " << e << endl;
	cout << "f: " << f << endl;
	
	if(resultado == 0){
		cout << "Sistema sem solucao";
		return;
	}else{
		cout << "x: " << x << endl;
		cout << "y: " << y << endl;
	}
}

int main(){
	int a, b, c, d, e, f, resultado;
	float x, y;
	
	ler_coeficientes(&a, &b, &c, &d, &e, &f);
	resultado = sistema(a, b, c, d, e, f, &x, &y);
	imprime(a, b, c, d, e, f, x, y, resultado);
}
