#include <iostream>

typedef int queue_element;
#include "queue_lg.h"

/* Dada uma fila Q, contendo números inteiros. Construir uma função
que elimina dessa fila todos os elementos maiores ou iguais a um
determinado valor lido X. Utilizar uma outra estrutura de fila como
auxiliar */

void listarLista(Queue Q){
	Queue aux;
	initQueue(aux);
	queue_element v;
	
	cout << "Lista: ";
	while(!isEmptyQ(Q)){
		v = eliminate(Q);
		cout << v << " ";
		insert(aux, v);
	}
	
	while(!isEmptyQ(aux)){
		v = eliminate(aux);
		insert(Q, v);
	}
}

int main(){
	Queue Q;
	initQueue(Q);
	queue_element v;
	int N, X;
	
	cout << "Digite o tamanho da fila: ";
	cin >> N;
	
	for(int i = 0; i < N; i++){
		cout << "Digite o valor da " << i << "o = ";
		cin >> v;
		insert(Q, v);
	}
	
	listarLista(Q);
	cout << "\nDigite o valor de X: ";
	cin >> X;
	
	Queue aux;
	initQueue(aux);
	while(!isEmptyQ(Q)){
		
		v = consult(Q);
		if(v >= X){
			v = eliminate(Q);
		}else{
			v = eliminate(Q);
			insert(aux, v);
		}
	}
	
	while(!isEmptyQ(aux)){
		v = eliminate(aux);
		insert(Q, v);
	}
	listarLista(Q);
}
