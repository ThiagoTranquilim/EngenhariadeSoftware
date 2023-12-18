#include <iostream>
#include <cstdlib>
#define GR_MAX 6

typedef int arv_elemento;

typedef struct no_arv{
	arv_elemento info;
	no_arv* link[GR_MAX];
}no_arv;

typedef no_arv* queue_element;
typedef no_arv* stack_element;
#include "queue_lg.h"
#include "stack_ld.h"

/* Considere uma árvore qualquer, cujo nó raiz está armazenado na
variável raiz. Construir uma função que recebe o endereço do nó raiz
e conta quantos nós dessa árvore possui apenas um descendente.
Retorna pelo return número de nós */

no_arv* novo_no_arv(){
	no_arv *nv;
	nv = (no_arv*)malloc(sizeof(no_arv));
	if(nv == NULL)exit(1);
	for(int i = 0; i < GR_MAX; i++)nv->link[i] = NULL;
	return nv;
}

void inserir_por_nivel(no_arv** raiz, int grau, arv_elemento x){
	queue_element v;
	Queue F; initQueue(F);
	no_arv* novo;
	novo = novo_no_arv();
	novo->info = x;
	
	if(*raiz == NULL){
		*raiz = novo;
		return;
	}
	insert(F, *raiz);
	while(!isEmptyQ(F)){
		v = eliminate(F);
		for(int j = 0; j < grau; j++){
			if(v->link[j] == NULL){
				v->link[j] = novo;
				return;
			}else
				insert(F, v->link[j]);
		}
	}
}

void percorre_largura(no_arv* raiz, int grau){
	queue_element v;
	Queue F; initQueue(F);
	
	if(raiz == NULL)return;
	insert(F, raiz);
	while(!isEmptyQ(F)){
		v = eliminate(F);
		cout << "     " << v->info;
		for(int j = 0; j < grau; j++){
			if(v->link[j] != NULL){
				insert(F, v->link[j]);
			}else break;
		}
	}
}

int quantidade1descendente(no_arv* raiz, int grau){
	queue_element v;
	Queue F; initQueue(F);
	int q = 0;
	
	if(raiz == NULL) return 0;
	
	insert(F, raiz);
	while(!isEmptyQ(F)){
		v = eliminate(F);
		int filhos = 0;
		for(int j = 0; j < grau; j++){
			if(v->link[j] != NULL){
				insert(F, v->link[j]);
				filhos++;
			}
		}
		
		if(filhos == 1){
			q++;
		}
	}
	return q;
}

int main(){
	no_arv *raiz;
	raiz = NULL;
	arv_elemento x;
	int grau, N, cont;
	cout << "Digite o grau da arvore (max = " << GR_MAX << " ) = ";
	do{cin >> grau;}while(grau < 1 || grau > GR_MAX);
	cout << "Digite a quantidade de no = "; cin >> N;
	
	for(int i = 0; i < N; i++){
		cout << i << "o. = ";
		cin >> x;
		inserir_por_nivel(&raiz, grau, x);
	}
	percorre_largura(raiz, grau);
	cont = quantidade1descendente(raiz, grau);
	cout << "\nQuantidade de nos com 1 descendente = " << cont;
}

