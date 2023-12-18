#include <iostream>
#include <cmath>

typedef int queue_element;
#include "queue_lg.h"

using namespace std;

/* Construir uma fun��o que monta uma fila Q, com 30 elementos,
onde cada elemento da fila � um termo da seguinte s�rie:
x� + x� /1! + x� / 2! + x� / 3! + ...., onde x �
um valor lido na main e passado na lista de par�metros */

Queue returnQ(int x){
	Queue Q;
	initQueue(Q);
	queue_element v;
	int res;
	
	for(int i = 0; i < 30; i++){
		int fat = i;
		for(int j = 1; j <= i; j++){
			fat *= j;
		}
		if(i == 0){
			res = pow(x, 0)/1;
		}else{
			res = (pow(x, i))/fat;
		}
		
		insert(Q, res);
	}
	
	return Q;
}

void imprime_fila(Queue Q){
	Queue aux;
	initQueue(aux);
	queue_element v;
	
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
	int x;
	cout << "Digite o valor: ";
	cin >> x;
	
	Q = returnQ(x);
	imprime_fila(Q);
}
