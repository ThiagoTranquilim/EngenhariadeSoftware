#include <iostream>

typedef int elemento_lista;
#include "listaligada.h"

using namespace std;

void imprimir(Lista l){
	int c = compr(l);
	
	for(int i = 1 ; i <= c; i++){
		cout << consultar(l, i) << " ";
	}
}

Lista inserirL3(Lista L1, Lista L2){
	Lista L3;
	init(L3);
	int c1 = compr(L1);
	int c2 = compr(L2);
	int cont = 1;
	for(int i = 1; i <= c1; i++){
		
		for(int j = 1; j <= c2; j++){
			
			if(consultar(L1, i) == consultar(L2, j)){
				break;
			}
			if(j == c2){
				inserir(L3, consultar(L1, i), cont);
				cont++;
			}
		}
	}
	return L3;
}

int main(){
	Lista L1, L2, L3;
	init(L1);
	init(L2);
	elemento_lista valor;
	
	for(int i = 1; i <= 10; i++){
		inserir(L1, i, i);
	}
	
	for(int i = 1; i <= 5; i++){
		inserir(L2, i, i);
	}
	
	imprimir(L1);
	cout << endl;
	imprimir(L2);
	cout << endl;
	
	L3 = inserirL3(L1, L2);
	imprimir(L3);
}
