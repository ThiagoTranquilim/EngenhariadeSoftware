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
e conta quantos nós dessa árvore possui todos os descendentes. Isto
é, nenhum dos seus links é NULL. Retorna pelo return número de nós */

no_arv* novo_no_arv(){
	no_arv* nv;
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
	
	if(raiz == NULL) return;
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

int returnDescendentes(no_arv* raiz, int grau){
	queue_element v;
	Queue F; initQueue(F);
	int verificacao = 0;
	
	if(raiz == NULL) return 0;
	insert(F, raiz);
	while(!isEmptyQ(F)){
		v = eliminate(F);
		int cont = 0;
		for(int j = 0; j < grau; j++){
			if(v->link[j] != NULL){
				insert(F, v->link[j]);
			}else cont++;
		}
		
		if(cont == 0){
			verificacao++;
		}
	}
	return verificacao;
}

int main(){
	no_arv* raiz;
	raiz = NULL;
	arv_elemento x;
	int grau, N, e;
	
	cout << "Digite o grau da arvore (max " << GR_MAX << " ) = ";
	do{cin >> grau;}while(grau < 1 || grau > GR_MAX);
	cout << "Digite a quantidade de no = ";
	cin >> N;
	
	for(int i = 0; i < N; i++){
		cout << i << "o. = ";
		cin >> x;
		inserir_por_nivel(&raiz, grau, x);
	}
	percorre_largura(raiz, grau);
	e = returnDescendentes(raiz, grau);
	cout << "\nNumero de nos que possuem todos seus links completos = " << e;
}
