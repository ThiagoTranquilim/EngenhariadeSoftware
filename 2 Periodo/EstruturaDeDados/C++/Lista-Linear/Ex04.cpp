#include <iostream>

typedef int elemento_lista;

#include "listaligada.h"

using namespace std;

/* Dadas duas listas linear L1 e L2, contendo elementos quaisquer. Supor que
a primeira lista comporta ambas. Construir uma função que acrescenta a lista
L2 no final da L1 */

void inserir_lista(Lista &L1, Lista L2){
	int c1 = compr(L1);
	int c2 = compr(L2);
	elemento_lista v;
	
	for(int i = 1; i <= c2; i++){
		
		v = consultar(L2, i);
		inserir(L1, v, c1 + i);
	}
}

void imprimir(Lista l){
	int c = compr(l);
	
	for(int i = 1; i <= c; i++){
		cout << " " << consultar(l, i);
	}
}

int main(){
	Lista L1, L2;
	int N1, N2, v;
	init(L1);
	init(L2);
	
	cout << "Digite o valor de N1: ";
	cin >> N1;
	
	cout << "\n Lista L1\n";
	for(int i = 1; i <= N1; i++){
		cout << "Digite o valor de V: ";
		cin >> v;
		inserir(L1, v, i);
	}
	
	
	do{
		cout << "Digite o valor de N2: ";
		cin >> N2;
	}while(N2 > N1 / 2);
	
	cout << "\nLista L2\n";
	for(int i = 1; i <= N2; i++){
		cout << "Digite o valor de V: ";
		cin >> v;
		inserir(L2, v, i);
	}
	
	inserir_lista(L1, L2);
	imprimir(L1);
	cout << endl;
	imprimir(L2);
}
