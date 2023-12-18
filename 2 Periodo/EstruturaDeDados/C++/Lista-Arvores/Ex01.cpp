#include <iostream>
#define GR_MAX 6

/* Considere uma árvore qualquer, cujo nó raiz está armazenado na
variável raiz. Construir uma função que recebe o endereço do nó raiz
e conta quantos nós a árvore possui. Retorna pelo return número de
nós */

typedef int arv_elemento;

typedef struct no_arv{
	arv_elemento info;
	no_arv* link[GR_MAX];
}no_arv;

typedef no_arv* queue_element;
#include "queue_lg.h"

using namespace std;

no_arv* novo_no_arv(){
	no_arv* nv;
	nv = (no_arv*)malloc(sizeof(no_arv));
	if(nv == NULL)exit(1);
	for(int i = 0; i < GR_MAX; i++)nv->link[i] = NULL;
	return nv;
}

void inserir_por_nivel(no_arv**raiz, int grau, arv_elemento x){
	Queue F; initQueue(F);
	queue_element v;
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

void percorrer_largura(no_arv* raiz, int grau){
	Queue F; initQueue(F);
	queue_element v;
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

int contaNo(no_arv* raiz, int grau){
	int N = 1;
	queue_element v;
	Queue F; initQueue(F);
	insert(F, raiz);
	
	if(raiz == NULL)return 0;
	while(!isEmptyQ(F)){
		v = eliminate(F);
		for(int j = 0; j < grau; j++){
			if(v->link[j] != NULL){
				N++;
				insert(F, v->link[j]);
			}else break;
		}
	}
	return N;
}

int main(){
	no_arv* raiz;
	arv_elemento x;
	raiz = NULL;
	int grau, N, numeroNo;
	cout << "\nDigite o grau (max: " << GR_MAX << " ): ";
	do{cin >> grau;}while(grau < 1 || grau > GR_MAX);
	cout << "Digite o numeros de no: "; cin >> N;
	
	for(int i = 1; i <= N; i++){
		cout << i << "o. = "; cin >> x;
		inserir_por_nivel(&raiz, grau, x);
	}
	percorrer_largura(raiz, grau);
	numeroNo = contaNo(raiz, grau);
	cout << "\nNumero de no: " << numeroNo;
}

