#include <iostream>
#include <string.h>

using namespace std;

/* Escreva um programa que leia uma string qualquer e verifique se ela é ou não palíndromo.
Uma palavra palíndromo é aquela que é igual quando lida de trás para frente e de frente
para trás.
Ex: String Lida: “socorram o marrocos”
Imprimir: A string lida é palíndromo */

int main(){
	char string[100];
	bool ver = true;
	
	cout << "Digite a string: ";
	cin.getline(string, 100);
	
	for(int i = 0, j = strlen(string) - 1; i < strlen(string); i++, j--){
		
		if(string[i] != string[j]){
			cout << "A string nao e palindromo";
			ver = false;
			break;
		}
	}
	
	if(ver){
		cout << "A string e um polindromo";
	}
}
