#include <iostream>
#include <math.h>

using namespace std;

/* Escreva um programa que calcule e imprima o somat�rio descrito
abaixo, onde N dever� ser lido e dever� ser maior do que 10 e
menor do que 100. Validar se o valor de N atende a condi��o. Se
n�o atender, repetir a digita��o at� que seja digitado um valor v�lido.
Use do/while para essa valida��o 
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
