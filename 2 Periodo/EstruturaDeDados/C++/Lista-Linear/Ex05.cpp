#include <iostream>

typedef int elemento_lista;
#include "listaligada.h"

using namespace std;

/* Dadas duas listas linear L1 e L2, ambas contendo números inteiros
ordenados. Construir uma função que cria uma terceira lista linear L3
contendo os elementos da interseção de L1 com L2 */

void imprimir(Lista l){
	int c = compr(l);
	
	for(int i = 1; i <= c; i++){
		cout << " " << consultar(l, i);
	}
	cout << endl;
}

Lista inter(Lista L1, Lista L2){
	Lista L3;
	init(L3);
	elemento_lista v;
	int c = compr(L1);
	int cont = 1;
	
	for(int i = 1; i <=  c; i++){
		
		for(int j = 1; j <= c; j++){
			
			if(consultar(L1, i) == consultar(L2, j)){
				inserir(L3, consultar(L1, i), cont);
				cont++;
			}
		}
	}
	
	return L3;
}

int main(){
	Lista L1, L2, L3;
	int N;
	elemento_lista v;
	init(L1);
	init(L2);
	
	cout << "Digite o tamanho das Listas: ";
	cin >> N;
	
	cout << endl << "Lista 1" << endl;
	for(int i = 1; i <= N; i++){
		cout << "Digite o V: ";
		cin >> v;
		inserir(L1, v, i); 
	}
	
	cout << endl << "Lista 2" << endl;
	for(int i = 1; i <= N; i++){
		cout << "Digite o V: ";
		cin >> v;
		inserir(L2, v, i); 
	}
	
	imprimir(L1);
	imprimir(L2);
	
	L3 = inter(L1, L2);
	
	imprimir(L3);
}
