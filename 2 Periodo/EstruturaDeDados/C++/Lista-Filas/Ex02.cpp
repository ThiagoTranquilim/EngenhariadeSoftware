#include <iostream>

typedef int queue_element;
#include "queue_lg.h"

/* Dada uma fila Q qualquer. Construir uma função que elimina dessa
fila os N primeiros elementos. Prever a possibilidade de a fila estar
vazia e de não ter N elementos */

int main(){
	Queue Q;
	initQueue(Q);
	queue_element v;
	int tam, N;
	
	cout << "\nDigite o tamanho da fila: ";
	cin >> tam;
	
	
	for(int i = 0; i < tam; i++){
		cout << "\nDigite o valor na " << i << "o. = ";
		cin >> v;
		insert(Q, v);
	}
	
	if(isEmptyQ(Q)){
		cout << "Fila vazia";
		return 0;
	}else{
		
		do{
		cout << "\nDigite o valor de N: ";
		cin >> N;
		
			if(N > tam){
				cout << "N precisa ser menor que" << tam << endl;
			}
		}while(N > tam);
		
		int s = 0;
		do{
			v = eliminate(Q);
			s++;
		}while(s < N);
		
		Queue aux;
		initQueue(aux);
		
		cout << "\nFila: ";
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
}
