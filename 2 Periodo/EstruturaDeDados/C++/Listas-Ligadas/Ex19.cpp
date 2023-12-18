#include <iostream>
#include <cstdlib>

using namespace std;

/* Dada uma lista ligada contendo números inteiros. Construir uma função que elimina
apenas o último nó. Verificar se a lista não está vazia */

typedef int elemento;

typedef struct no{
	elemento info;
	no* link;
}no;

no* init(){
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

void inserir_final(no** pri, elemento a){
	no* novo, *p;
	novo = novo_no();
	novo->info = a;
	novo->link = NULL;
	p = *pri;
	
	while( p != NULL && p->link != NULL){
		p = p->link;
	}
	
	if(p == NULL){
		*pri = novo;
	}else{
		p->link = novo;
	}
}

int excluir(no** pri){
	no* p, *anterior;
	p = *pri;
	anterior = NULL;
	
	if(*pri == NULL){
		return -1;
	}
	while(p != NULL && p->link != NULL){
		anterior = p;
		p = p->link;
	}
	if(p == NULL){
		return 0;
	}
	if(p->link == NULL){
		anterior->link = NULL;
	}
	free(p);
	return 1;
	
	
}

void imprimir(no* pri){
	no* p = pri;
	
	while(p != NULL){
		cout << p->info << " ";
		p = p->link;
	}
}

int main(){
	no* pri;
	pri = init();
	int N;
	
	cout << "Digite a quantidade de no: ";
	cin >> N;
	for(int i = 0; i < N; i++){
		inserir_final(&pri, i);
	}
	
	imprimir(pri);
	
	excluir(&pri);
	
	cout << endl;
	imprimir(pri);
}
