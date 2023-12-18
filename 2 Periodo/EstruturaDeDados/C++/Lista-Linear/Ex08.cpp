#include <iostream>

typedef int elemento_lista;
#include "listaligada.h"

using namespace std;

/* Construir uma função que recebe como parâmetro uma lista linear contendo
números inteiros (entre1 e 10), não ordenados, e que há várias repetições de
todos eles. Construir uma segunda lista para conter: na 1ª posição a
quantidade de repetições do número 1, na 2ª as repetições do número 2, e
assim por diante, até a 10ª posição */

Lista quantidadeLista(Lista L1){
	Lista L2;
	init(L2);
	int c = compr(L1);
	int cont = 0;
	
	for(int i = 1; i <= c; i++){
		
		for(int j = 1; j <= c; j++){
			
			if(i == consultar(L1, j)){
				cont++;
			}
		}
		inserir(L2, cont, i);
		cont = 0;
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
	Lista L, L2;
	init(L);
	elemento_lista a;
	
	for(int i = 1; i <= 10; i++){
		int random = rand() % 9 + 1;
		inserir(L, random, i);
	}
	
	imprimir(L);
	cout << endl;
	
	L2 = quantidadeLista(L);
	imprimir(L2);
}
