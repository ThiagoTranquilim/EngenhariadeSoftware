#include <iostream>

using namespace std;

/* Fa�a um algoritmo que leia dois valores inteiros A e B. Se os valores
forem iguais dever� somar os dois, caso contr�rio multiplique A por B.
Ao final de qualquer um dos c�lculos deve-se atribuir o resultado para
uma vari�vel C e mostrar seu conte�do na tela */

int main(){
	int a, b, c;
	
	cin >> a;
	cin >> b;
	
	if(a == b){
		c = a + b;
	}else
		c = a * b;
	
	cout << c;
	
	return 0;
}
