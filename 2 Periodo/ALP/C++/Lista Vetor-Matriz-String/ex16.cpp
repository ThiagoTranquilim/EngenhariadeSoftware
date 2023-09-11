#include <iostream>
#include <string.h>

using namespace std;

/* Escreva um programa que leia uma string qualquer e gere e imprima uma segunda
invertendo cada par de caracteres da string original. Se a string possuir tamanho ímpar, o
último caractere não deve ser modificado.
Ex: String lida: “74j-i7*”
String Gerada: “47-j7i*” */

int main(){
	char string[10], string2[10];
	
	cout << "Digite a string: ";
	cin.getline(string, 10);
	
	for(int i = 0; i < strlen(string); i++){
		
		if(i % 2 == 0){
			string2[i] = string[i + 1];
		}else
			string2[i] = string[i - 1];
	}
	
	if(strlen(string) % 2 != 0){
		
		string2[strlen(string) - 1] = string[strlen(string) - 1];
	}
	
	cout << string2;
}
