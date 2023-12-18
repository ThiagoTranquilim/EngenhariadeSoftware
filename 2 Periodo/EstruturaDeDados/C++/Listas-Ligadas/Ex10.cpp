#include <iostream>
#include <cstdlib>

using namespace std;

/* Dada uma lista ligada contendo n�meros inteiros. Construir uma fun��o que insere
ap�s cada n�, um novo n�, com a mesma informa��o dele. No final a lista dever� estar
com todos os valores duplicados. N�o usar estruturas auxiliares para a solu��o, tais
como, vetor ou outra lista ligada */

typedef int elemento;

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

void inserir_final2(no**pri, elemento a){
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
	
	inserir_final2(pri, a);
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
	no* pri;
	pri = no_init();
	elemento valor = 0;
	
	for(int i = 0; i < 15; i++){
		valor = rand() % 10 + 1;
		inserir_final(&pri, valor);
	}
	imprime_lista(pri);
}
