#include <iostream>

using namespace std;

/* Construir um programa que faz a leitura de um n�mero inteiro
qualquer e imprime de ele � m�ltiplo de 5 ou n�o */

int main(){
	int num;
	
	cin >> num;
	
	if(num % 5 == 0){
		cout << "O numero e multiplo de 5";
	}else
		cout << "O numero nao e multiplo de 5";
	
	return 0;
}
