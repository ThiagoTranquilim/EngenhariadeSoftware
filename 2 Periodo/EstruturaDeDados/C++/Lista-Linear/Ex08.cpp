#include <iostream>

typedef int elemento_lista;
#include "listaligada.h"

using namespace std;

/* Construir uma fun��o que recebe como par�metro uma lista linear contendo
n�meros inteiros (entre1 e 10), n�o ordenados, e que h� v�rias repeti��es de
todos eles. Construir uma segunda lista para conter: na 1� posi��o a
quantidade de repeti��es do n�mero 1, na 2� as repeti��es do n�mero 2, e
assim por diante, at� a 10� posi��o */

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
