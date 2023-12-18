#include <iostream>

typedef int queue_element;
#include "queue_lg.h"


/* Construir uma função que recebe uma fila Q, contendo números
inteiros quaisquer e usando uma estrutura auxiliar inverte a ordem
dos elementos dessa fila */

void altera_ordem(Queue Q, int N){
	int vet[N], i = 0;
	queue_element v;
	
	while(!isEmptyQ(Q)){
		v = eliminate(Q);
		vet[i] = v;
		i++;
	}
	
	while(i > 0){
		i--;
		v = vet[i];
		insert(Q, v);
	}
}

void imprime_lista(Queue Q){
	Queue aux;
	queue_element v;
	initQueue(aux);
	
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
	int N = 5;
	
	for(int i = 0; i < N; i++){
		cout << "Digite o valor da " << i << "o = ";
		cin >> v;
		insert(Q, v);
	}
	imprime_lista(Q);
	altera_ordem(Q, N);
	cout << endl;
	imprime_lista(Q);
}
