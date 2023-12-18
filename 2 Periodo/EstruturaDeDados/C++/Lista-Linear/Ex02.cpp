#include <iostream>

typedef int elemento_lista;

#include "listaligada.h"

using namespace std;

/* Construiu uma função que faz a imprime os elementos de uma lista linear
de inteiros */

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
	
	for(int i = 1; i <= N; i++){
		cout << " " << consultar(L, i);
	}
}
