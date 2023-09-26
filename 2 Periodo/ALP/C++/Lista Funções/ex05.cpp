#include <iostream>

using namespace std;

/* Construir um programa que faz a leitura de três números inteiros DIFERENTES e verifica
qual deles é o maior. O programa deverá ter a seguinte divisão de funções – a divisão de
módulos no exercício serve apenas para estudarmos passagem de parâmetros por
enderço.
a) função1 que faz a leitura dos três números inteiros. Valida sessão diferentes. Se
ocorrer repetição, repetir leitura ATÉ que os três digitados sejam diferentes. A
comunicação das informações lidas deverá ser pela lista de parâmetros.
PROTÓTIPO: void ler_tres (int *a, int *b, int *c);
b) função2 que recebe os valores de três números inteiros (pela lista de parâmetros),
verifica qual deles é o maior e retorna através do comando return o maior deles.
PROTÓTIPO: int maior_tres (int a, int b, int c);
c) função3 que recebe os valores dos três números lidos e do maior valor
encontrado (todos pela lista de parâmetros) e imprime todas as informações.
PROTÓTIPO: void imprime_quatro (int a, int b, int c, int m);
d) função main() define as variáveis do problema e chama as funções definidas */

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
