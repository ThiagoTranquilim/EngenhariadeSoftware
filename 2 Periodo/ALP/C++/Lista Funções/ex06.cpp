#include <iostream>

using namespace std;

/* Construir um programa que calcula a solução x e y de um sistema de equações lineares do
tipo: ax + by = c
dx + ey = f é dada por:
O programa deverá ter a seguinte divisão de funções:
a) Função1: que faz a leitura dos coeficientes (a, b, c, d, e, f). A comunicação das informações
lidas deverá ser pela lista de parâmetros.
PROTÓTIPO: void ler_coeficientes (int *a, int *b, int *c, int *d, int *e, int *f);
b) Função2: que recebe os valores dos coeficientes (pela lista de parâmetros) e calcula x e y.
A comunicação do x e do y deverá ser pela lista de parâmetros. Testar se não resulta em
divisão por zero. Se resultar em zero, devolver pelo return o valor 0 (zero). Se não resultar
em divisão por zero, devolver pelo return o valor 1 (um);
PROTÓTIPO: int sistema (int a, int b, int c, int d, int e, int f, float*x, float *y);
c) Função3 que recebe os valores dos coeficientes lidos, os de x y e o valor de retorno do
comando return (todos pela lista de parâmetros) e imprime os coeficientes e de acordo
com o valor do return da função anterior imprimir mensagem: “Sistema sem solucao" e
não imprimir x e y ou imprimir a solução do sistema;
PROTÓTIPO: void imprime (int a, int b, int c, int d, int e, int f, float x, float y, int flag);
d) a função main() que define as variáveis do problema e chama as funções definidas */

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
