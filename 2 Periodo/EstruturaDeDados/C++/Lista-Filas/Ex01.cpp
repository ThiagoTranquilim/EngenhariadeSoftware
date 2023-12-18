#include <iostream>

typedef int queue_element;
#include "queue_lg.h"

/* Construir uma função que faz a leitura de n números inteiros para
uma fila */

void imprime_fila(Queue Q){
	Queue aux;
	initQueue(aux);
	queue_element v;
	cout << "Inicio <- ";
	while(!isEmptyQ(Q)){
		v = eliminate(Q);
		cout << v << " ";
		insert(aux, v);
	}
	cout << " <- fim da fila";
	while(!isEmptyQ(aux)){
		v = eliminate(aux);
		insert(Q, v);
	}
	cout << "\n";
}

int main(){
	Queue Q;
	initQueue(Q);
	queue_element v;
	int N;
	cout << "Quantos numeros? ";
	cin >> N;
	for(int i = 0; i < N; i++){
		cout << "Digite o " << i + 1 << "o = ";
		cin >> v;
		insert(Q, v);
		cout << "\n FILA APOS INSERCAO DO NUMERO " << v << endl;
		imprime_fila(Q);
	}
	
	cout << "\n\n\n";
}
