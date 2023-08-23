#include <iostream>
#include <math.h>

using namespace std;

int main(){
	
	/*Fazer um programa que faz a leitura de um número X (maior do que zero) e calcular a raiz quadrada,
	armazenando o resultado em outra variável. Testar o programa para números inteiros e reais positivos.
	Utilizar a função: resultado = sqrt(X); Biblioteca: <math.h>.*/
	
	int x;
	float raiz;
	
	do{
		cout << "Digite o valor de X: ";
		cin >> x;
			if(x < 0){
				cout << "Digite um valor maior que 0\n";
			}
	}while(x < 0);
	
	raiz = sqrt(x);
	
	cout << "A raiz de " << x << " e " << raiz;
	
	return 0;
}
