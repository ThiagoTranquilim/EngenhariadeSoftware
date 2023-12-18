#include <iostream>

typedef int elemento_lista;
#include "listaligada.h"

using namespace std;

/* Dada uma lista linear L, contendo números inteiros quaisquer. Construir uma
função que elimina dessa lista o maior elemento */

void maior(Lista &L1){
	int iMaior = 1, c = compr(L1);
	elemento_lista maior;
	
	maior = consultar(L1, 1);
	for(int i = 1; i <= c; i++){
		
		if(consultar(L1, i) > maior){
			maior = consultar(L1, i);
			iMaior = i;
		}
	}
	
	maior = eliminar(L1, iMaior);
}

void imprimir(Lista l){
	int c = compr(l);
	
	for(int i = 1; i <= c; i++){
		cout << " " << consultar(l, i);
	}
	
	cout << endl;
}

int main(){
	Lista L1;
	int N;
	init(L1);
	elemento_lista v;
	
	cout << "Digite o valor de N: ";
	cin >> N;
	
	for(int i = 1; i <= N; i++){
		cout << "Digite V: ";
		cin >> v;
		inserir(L1, v, i);
	}
	
	imprimir(L1);
	maior(L1);
	imprimir(L1);
}
