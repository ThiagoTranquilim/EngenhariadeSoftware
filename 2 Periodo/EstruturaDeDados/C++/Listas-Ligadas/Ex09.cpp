#include <iostream>
#include <cstdlib>

using namespace std;

/* Dada uma lista ligada contendo números inteiros (entre1 e 10 ), não ordenados, e que
há várias repetições de cada um eles. Construir uma função que cria uma segunda lista
ligada para conter: no 1° nó a quantidade de repetições do número 1, no 2° nó as
repetições do número 2, e assim por diante, até o 10° nó */

typedef float elemento;

typedef struct no{
	elemento info;
	no* link;
}no;

no* no_init(){
	return NULL;
}

no* novo_no(){
	no* novo;
	novo = (no*)malloc(sizeof(no));
	if(novo == NULL) exit(1);
	return novo;
}

void inserir_inicio(no** pri, elemento a){
	no* novo;
	novo = novo_no();
	novo->info = a;
	novo->link = *pri;
	*pri = novo;
}

int cont(no* pri, int i){
	int contagem;
	no* p;
	p = pri;
	
	while(p != NULL){
		
		if(p->info == i){
			contagem++;
		}
		p = p->link;
	}
	
	return contagem;
}

void inserir_final(no**pri, elemento a){
	no* novo;
	novo = novo_no();
	novo->info = a;
	novo->link = NULL;
	no* p = *pri;
	
	while(p != NULL && p->link != NULL){
		p = p->link;
	}
	if(p == NULL){
		*pri = novo;
	}else
		p->link = novo;
}

void imprime_lista(no* pri){
	no* p;
	p = pri;
	
	while(p != NULL){
		cout << " " << p->info;
		p = p->link;
	}
}

int main(){
	int numero;
	no* pri, *seg;
	pri = no_init();
	seg = no_init();
	elemento valor = 0;
	
	for(int i = 0; i < 15; i++){
		valor = rand() % 10 + 1;
		inserir_final(&pri, valor);
	}
	imprime_lista(pri);
	cout << endl;
	
	for(int i = 1; i <= 10; i++){
		numero = cont(pri, i);
		inserir_final(&seg, numero);
	}
	imprime_lista(seg);
}
