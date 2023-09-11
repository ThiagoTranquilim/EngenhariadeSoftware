#include <iostream>
#include <string.h>

using namespace std;

/* Construir um programa que faz a leitura de uma string e faz a troca dos ‘a’s por ‘o’s e dos
‘e’s por ‘u’s. Trocar na mesma string. Imprimir a string final */

int main(){
	char string[100];
	
	cout << "Digite a string: ";
	cin.getline(string, 100);
	
	for(int i = 0; i < strlen(string); i++){
		
		strlwr(string);
		if(string[i] == 'a'){
			string[i] = 'o';
		}else
			if(string[i] == 'e'){
				string[i] = 'u';
			}
	}
	
	cout << string;
}
