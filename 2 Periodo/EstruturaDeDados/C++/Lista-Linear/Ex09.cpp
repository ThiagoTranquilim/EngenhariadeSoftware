#include <iostream>

typedef int elemento_lista;
#include "listaligada.h"

using namespace std;

/* Construir uma função que recebe como parâmetro uma lista linear contendo
números inteiros quaisquer e que altera cada elemento multiplicando-o por 2 */

Lista mult2(Lista L1){
	Lista L2;
	init(L2);
	int c = compr(L1);
	
	for(int i = 1; i <= c; i++){
		inserir(L2, consultar(L1, i) * 2, i);
	}
	
	return L2;
}

void imprimir(Lista l){
	int c = compr(l);
	
	for(int i = 1; i <= c; i++){
		cout << consultar(l, i) << " ";
	}
}

int main(){
	Lista L1, L2;
	init(L1);
	
	for(int i = 1; i <= 5; i++){
		inserir(L1, i, i);
	}
	imprimir(L1);
	cout << endl;
	
	L2 = mult2(L1);
	imprimir(L2);
}
