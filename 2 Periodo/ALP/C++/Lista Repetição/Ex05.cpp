#include <iostream>

using namespace std;

/* Faça um programa que calcule o reajuste do salário de um funcionário.
Considere que o funcionário deverá receber um reajuste de 15%, caso
seu salário seja menor que R$500,00; se o salário for maior ou igual a
R$500,00, mas menor ou igual a R$1000,00, seu reajuste será de
10%; caso seja ainda maior que R$1000,00, o reajuste deverá ser de
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
