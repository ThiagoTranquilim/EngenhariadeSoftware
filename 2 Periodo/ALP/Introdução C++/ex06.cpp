#include <iostream>
#include <math.h>

using namespace std;

int main(){
	
	/*Fazer um programa que faz a leitura de X e Y e calcular X elevado à potência Y. Utilizar a função: resultado =
	pow (x, y); sendo que X deve ser maior do que zero e Y deve ser do tipo inteiro e maior do que zero.
	Biblioteca: <math.h>*/
	
	int x, y, resultado;
	
	do{
		cout << "Digite o valor de x: ";
		cin >> x;
		
		if(x < 0){
			cout << "Digite um valor maior que 0\n";
		}
	}while(x < 0);
	
	do{
		cout << "Digite o valor de y: ";
		cin >> y;
		
		if(x < 0){
			cout << "Digite um valor maior que 0\n";
		}
	}while(y < 0);
	
	resultado = pow(x, y);
	
	cout << "O valor e: " << resultado;
	
	return 0;
}
