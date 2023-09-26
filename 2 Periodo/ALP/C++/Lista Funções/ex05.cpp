#include <iostream>

using namespace std;

/* Construir um programa que faz a leitura de tr�s n�meros inteiros DIFERENTES e verifica
qual deles � o maior. O programa dever� ter a seguinte divis�o de fun��es � a divis�o de
m�dulos no exerc�cio serve apenas para estudarmos passagem de par�metros por
ender�o.
a) fun��o1 que faz a leitura dos tr�s n�meros inteiros. Valida sess�o diferentes. Se
ocorrer repeti��o, repetir leitura AT� que os tr�s digitados sejam diferentes. A
comunica��o das informa��es lidas dever� ser pela lista de par�metros.
PROT�TIPO: void ler_tres (int *a, int *b, int *c);
b) fun��o2 que recebe os valores de tr�s n�meros inteiros (pela lista de par�metros),
verifica qual deles � o maior e retorna atrav�s do comando return o maior deles.
PROT�TIPO: int maior_tres (int a, int b, int c);
c) fun��o3 que recebe os valores dos tr�s n�meros lidos e do maior valor
encontrado (todos pela lista de par�metros) e imprime todas as informa��es.
PROT�TIPO: void imprime_quatro (int a, int b, int c, int m);
d) fun��o main() define as vari�veis do problema e chama as fun��es definidas */

void ler_tres(int *a, int *b, int *c){
	do{
		cout << "Digite o valor de a: ";
		cin >> *a;
		
		if(*a == *b || *a == *c){
			cout << "Digite um numero diferente de B e C\n";
		}
	}while(*a == *b || *a == *c);
	
	do{
		cout << "Digite o valor de b: ";
		cin >> *b;
		
		if(*a == *b || *b == *c){
			cout << "Digite um numero diferente de A e C\n";
		}
	}while(*a == *b || *b == *c);
	
	do{
		cout << "Digite o valor de c: ";
		cin >> *c;
		
		if(*a == *c || *b == *c){
			cout << "Digite um numero diferente de A e B\n";
		}
	}while(*a == *c || *b == *c);
	
}

int maior_tres(int a, int b, int c){
	
	if(a > b){
		if(a > c){
			return a;
		}else
			return c;
	}else
		if(b > c){
			return b;
		}else
			return c;
}

void imprime_quatro(int a, int b, int c, int mai){
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	cout << "c: " << c << endl;
	cout << "maior: " << mai;
}

int main(){
	int a, b, c, mai;
	
	ler_tres(&a, &b, &c);
	mai = maior_tres(a, b, c);
	imprime_quatro(a, b, c, mai);
}
