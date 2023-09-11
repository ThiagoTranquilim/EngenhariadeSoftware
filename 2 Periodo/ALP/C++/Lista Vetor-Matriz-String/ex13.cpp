#include <iostream>
#include <string.h>

using namespace std;

/* Construir um programa que faz a leitura de uma string de no mínimo 4 e no máximo 10
caracteres e imprima: o primeiro, o segundo, o penúltimo e o último caracteres. */

int main(){
	char a[100];
	
	cout << "Digite uma string: ";
	
	do{
		cin.getline(a, 100);
		
		if(strlen(a) < 4 || strlen(a) > 10){
			
			cout << "\nDigite uma string de no minimo 4 caracteres e no maximo 10\n";
		}
	}while(strlen(a) < 4 || strlen(a) > 10);
	
	cout << a[0] << endl;
	cout << a[1] << endl;
	cout << a[strlen(a)-2] << endl;
	cout << a[strlen(a) -1] << endl;
}
