#include <iostream>

typedef int elemento_lista;

#include "listaligada.h"

using namespace std;

/* Construiu uma fun��o que faz a leitura de v�rios n�meros inteiros e os
armazena numa lista linear. */

int main(){
	Lista L;
	int N, v;
	init(L);
	
	cout << "Digite o valor de N: ";
	cin >> N;
	for(int i = 1; i <= N; i++){
		cout << "Digite o valor de V: ";
		cin >> v;
		inserir(L, v, i);
	}
}
