#include <iostream>
#include <string.h>

using namespace std;

/* Escreva um programa que leia uma string qualquer e verifique se ela � ou n�o pal�ndromo.
Uma palavra pal�ndromo � aquela que � igual quando lida de tr�s para frente e de frente
para tr�s.
Ex: String Lida: �socorram o marrocos�
Imprimir: A string lida � pal�ndromo */

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
