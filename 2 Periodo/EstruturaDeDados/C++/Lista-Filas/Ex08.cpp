#include <iostream>

typedef int queue_element;
#include "queue_lg.h"

/* Construir uma função que monta uma fila Q, com 30 elementos,
onde cada elemento da fila é um termo da seguinte série:
4 - 4/3 + 4/5 - 4/7 + 4/9 - 4/11 + ... . Isto é,
o 1º elemento da fila é: 4 , o 2º é: -4/3 e assim por diante */

Queue returnQ(){
	Queue Q;
	initQueue(Q);
	queue_element res;
	int N = 30;
	bool ver = true;
	
	for(int i = 0, j = 1; i < N; i++, j+=2){
		if(ver == true){
			res = 4 / j;
			cout << "+ 4 / " << j << " | ";
			insert(Q, res);
			ver = false;
		}else{
			res = -4 / j;
			cout << "-4 / " << j << " | ";
			insert(Q, res);
			ver = true;
		}
	}
	
	return Q;
}


void imprime_fila(Queue Q){
	Queue aux;
	initQueue(aux);
	queue_element v;
	
	cout << "Fila 1 ";
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
	
	Q = returnQ();
	cout << endl;
	imprime_fila(Q);
}
