#include <iostream>

typedef int queue_element;
#include "queue_lg.h"

/* Construir uma função que recebe duas filas Q1 e Q2, contendo
números inteiros ordenados e constrói uma terceira fila Q3,
contendo os elementos da fila Q1 e da Q2 sem os elementos da
interseção de Q1 com Q2 */

Queue returnQ3(Queue Q1, Queue Q2) {
    Queue Q3, aux, aux2;
    queue_element v1, v2;
    initQueue(Q3);
    initQueue(aux);
    initQueue(aux2);

    while (!isEmptyQ(Q1)) {
        v1 = eliminate(Q1);
        insert(aux2, v1);
        bool foundInQ2 = false;

        while (!isEmptyQ(Q2)) {
            v2 = eliminate(Q2);
            insert(aux, v2);
            if (v1 == v2) {
                foundInQ2 = true;
                break;
            }
        }
        
        while(!isEmptyQ(aux)){
        	v2 = eliminate(aux);
        	insert(Q2, v2);
		}

        if (!foundInQ2) {
            insert(Q3, v1);
        }
    }
    
    while(!isEmptyQ(aux2)){
    	v1 = eliminate(aux2);
    	insert(Q1, v1);
	}
    
    while (!isEmptyQ(Q2)) {
        v2 = eliminate(Q2);
        bool foundInQ1 = false;

        while (!isEmptyQ(Q1)) {
            v1 = eliminate(Q1);
            insert(aux, v1);
            if (v1 == v2) {
                foundInQ1 = true;
                break;
            }
        }
        
        while(!isEmptyQ(aux)){
        	v1 = eliminate(aux);
        	insert(Q1, v1);
		}

        if (!foundInQ1) {
            insert(Q3, v2);
        }
    }
    
    return Q3;
}

void imprime_fila(Queue Q){
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
	Queue Q1, Q2, Q3;
	queue_element v;
	int N = 5;
	initQueue(Q1);
	initQueue(Q2);
	initQueue(Q3);
	
	cout << "Fila 1: ";
	for(int i = 0; i < N; i++){
		cout << "Digite o valor da " << i << "o = ";
		cin >> v;
		insert(Q1, v);
	}
	
	cout << "Fila 2: ";
	for(int i = 0; i < N; i++){
		cout << "Digite o valor da " << i << "o = ";
		cin >> v;
		insert(Q2, v);
	}
	imprime_fila(Q1);
	cout << endl;
	imprime_fila(Q2);
	
	Q3 = returnQ3(Q1, Q2);
	cout << endl;
	imprime_fila(Q3);
}
