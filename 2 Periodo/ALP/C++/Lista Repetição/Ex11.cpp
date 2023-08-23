#include <iostream>

using namespace std;

/* Um funcionário irá receber um aumento de acordo com o seu plano
de trabalho, de acordo com a tabela abaixo
Faça um programa que leia o plano de trabalho e o salário atual de
um funcionário e calcula e imprime o seu novo salário. Use o
comando switch.
	Plano | Aumento
	1	 |	10%
	2   |	15%
	3  |	20% */

int main(){
	int plano;
	float aumento, salario;
	
	cin >> plano;
	cin >> salario;
	
	switch(plano){
		
		case 1:
			aumento = 0.1;
			break;
		
		case 2:
			aumento = 0.15;
			break;
		
		case 3:
			aumento = 0.2;
			break;
	}
	salario = salario + (salario * aumento);
	
	cout << salario;
}
