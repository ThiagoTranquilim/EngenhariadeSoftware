#include <iostream>
#include <cstdlib>

using namespace std;

/* Construir uma função que cria uma lista ligada para conter em cada nó um termo da
seguinte soma: 1/1 + 3/2 + 5/3 + 7/4 + 99/50 */

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
	no* pri;
	pri = no_init();
	elemento valor = 0;
	
	for(float i = 1, j = 1; i < 100; i+=2, j++){
		valor += i / j;
		inserir_final(&pri, valor);
	}
	imprime_lista(pri);
}
