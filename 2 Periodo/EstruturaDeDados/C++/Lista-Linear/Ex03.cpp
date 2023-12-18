#include <iostream>

typedef int elemento_lista;

#include "listaligada.h"

using namespace std;

/* Construir uma função que recebe uma lista linear L, com números inteiros,
e verifica se os elementos da lista estão em ordem crescente. O resultado
deverá retornar através de um return. Na main, imprimir mensagem */

int verifica_ordem_crescente(Lista l){
	int c = compr(l), v1, v2;
	
	v1 = consultar(l, 1);
	for(int i = 2; i <= c; i++){
		v2 = consultar(l, i);
		if(v1 > v2){
			return 0;
		}else{
			v1 = v2;
		}
	}
	return 1;
}

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
	
	v = verifica_ordem_crescente(L);
	cout << v;
}
