#include <iostream>
#include <string.h>

using namespace std;

/* Construir um programa que faz a leitura de uma cadeia de caracteres (string) contendo
uma frase e conta quantas palavras há na frase. Imprime a frase lida e número de palavras
contadas. Dividir o programa no seguinte conjunto de módulos:
função1: leitura de uma cadeia de caracteres (string);
PROTÓTIPO: void ler_frase( char f[ ]);
função2: recebe uma cadeia de caracteres (string) e conta a quantidade de
palavras que há na frase. Devolver pela lista de parâmetros quantidade
encontrada.
PROTÓTIPO: int conta_palavras ( char f[ ]);
função main: define as variáveis do problema e chama as funções e imprime a
frase lida e número de palavras retornado da função */

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
