#include <iostream>
#include <string.h>

using namespace std;

/* Construir um programa que faz a leitura de uma cadeia de caracteres (string) contendo
uma frase e conta quantas palavras h� na frase. Imprime a frase lida e n�mero de palavras
contadas. Dividir o programa no seguinte conjunto de m�dulos:
fun��o1: leitura de uma cadeia de caracteres (string);
PROT�TIPO: void ler_frase( char f[ ]);
fun��o2: recebe uma cadeia de caracteres (string) e conta a quantidade de
palavras que h� na frase. Devolver pela lista de par�metros quantidade
encontrada.
PROT�TIPO: int conta_palavras ( char f[ ]);
fun��o main: define as vari�veis do problema e chama as fun��es e imprime a
frase lida e n�mero de palavras retornado da fun��o */

void ler_f(char f[]){
	
	cin.getline(f, 100);
}

int conta(char f[]){
	int cont = 0;
	for(int i = 0; f[i] != '\0'; i++){
		
		if(f[i] == ' '){
			cont++;
		}
	}
	return cont + 1;
}

int main(){
	char f[100];
	int cont;
	ler_f(f);
	cont = conta(f);
	cout << cont;
}
