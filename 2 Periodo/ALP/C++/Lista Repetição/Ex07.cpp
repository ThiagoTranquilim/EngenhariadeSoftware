#include <iostream>
#include <math.h>

using namespace std;

/* Escreva um programa que calcule e imprima o somatório descrito
abaixo, onde N deverá ser lido e deverá ser maior do que 10 e
menor do que 100. Validar se o valor de N atende a condição. Se
não atender, repetir a digitação até que seja digitado um valor válido.
Use do/while para essa validação 
S = sqrt(1) + sqrt(2) + sqrt(3) + sqrt(4) + sqrt(N)
*/

int main(){
	int N;
	float s = 0;
	
	do{
		cin >> N;
		
		if((N <= 10) || (N >= 100)){
			cout << "Digite um valor entre 10 e 100" << endl;
		}
	}while((N <= 10) || (N >= 100));
	
	for(int i = 1; i <= N; i++){
		s += sqrt(i);
	}
	cout << "Valor final: " << s;
	
	return 0;
}
