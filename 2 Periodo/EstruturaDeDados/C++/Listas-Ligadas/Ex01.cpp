#include <iostream>
#include <cstdlib>

using namespace std;

/* Dada uma lista ligada. Construir uma função que conta o número de nós dessa lista. O
número de nós encontrado deverá retornar pelo comando return */

typedef int elemento;

typedef struct no{
	elemento info;
	no* link;
}no;

no* no_init(){
	return NULL;
}

void imprime(no* pri){
	no* p;
	p = pri;
	while(p != NULL){
		cout << p->info << " ";
		p = p->link;
	}
}

int conta(no *pri){
	int i = 0;
	no* p;
	p = pri;
	while(p != NULL){
		p = p->link;
		i++;
	}
	return i;
}

no* novo_no(){
	no* novo;
	novo = (no*)malloc(sizeof(no));
	if(novo == NULL)exit(1);
	return novo;
}

void inserir_final(no ** pri, elemento a){
	no* novo, *p;
	novo = novo_no();
	novo->info = a;
	novo->link = NULL;
	p = *pri;
	while(p!=NULL && p->link != NULL)
		p = p->link;
	if(p == NULL)
		* pri = novo;
	else p->link = novo;
}

int main(){
	int cont;
	no *pri;
	pri = no_init();
	
	inserir_final(&pri, 1);
	inserir_final(&pri, 2);
	inserir_final(&pri, 3);
	inserir_final(&pri, 4);
	imprime(pri);
	cont = conta(pri);
	cout << cont;
}
