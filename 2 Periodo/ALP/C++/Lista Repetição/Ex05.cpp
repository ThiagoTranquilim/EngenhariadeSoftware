#include <iostream>

using namespace std;

/* Fa�a um programa que calcule o reajuste do sal�rio de um funcion�rio.
Considere que o funcion�rio dever� receber um reajuste de 15%, caso
seu sal�rio seja menor que R$500,00; se o sal�rio for maior ou igual a
R$500,00, mas menor ou igual a R$1000,00, seu reajuste ser� de
10%; caso seja ainda maior que R$1000,00, o reajuste dever� ser de
5% */

int main(){
	float reajuste, salario;
	
	cin >> salario;
	
	if(salario < 500){
		reajuste = 0.15;
	}else
		if(salario >= 500 && salario <= 1000){
			reajuste = 0.10;
		}else
			if(salario > 1000){
				reajuste = 0.05;
			}
	salario = salario + (salario * reajuste);
	cout << salario;
	
	return 0;
}
