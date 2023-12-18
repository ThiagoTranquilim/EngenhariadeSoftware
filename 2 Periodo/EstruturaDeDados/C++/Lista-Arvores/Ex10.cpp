#include <iostream>
#include <cstdlib>

using namespace std;

/* Considere uma �rvore bin�ria qualquer, cujo n� raiz est�
armazenado na vari�vel raiz. Construir uma fun��o que verifica
quantos n�s possuem os dois descendentes (isto �, grau 2) */

typedef int arvb_elemento;
typedef struct no_arvb{
	arvb_elemento info;
	no_arvb *le, *ld;
}no_arvb;

no_arvb* novo_no_arvb(){
	no_arvb* nv;
	nv = (no_arvb*)malloc(sizeof(no_arvb));
	if(nv == NULL)exit(1);
	nv->le = nv->ld = NULL;
	return nv;
}

void inserir(no_arvb** raiz, arvb_elemento A){
	no_arvb* p, *novo;
	p = *raiz;
	novo = novo_no_arvb();
	novo->info = A;
	
	if(*raiz == NULL){
		*raiz = novo;
		return;
	}
	
	if(p == NULL)return;
	while(p != NULL){
		
		if(A < p->info){
			
			if(p->le != NULL){
				p = p->le;
			}else{
				p->le = novo;
				return;
			}
		}else
			if(p->ld != NULL){
				p = p->ld;
			}else{
				p->ld = novo;
				return;
			}
	}
}

void preordem(no_arvb* t){
	
	if(t != NULL){
		cout << " " << t->info;
		preordem(t->le);
		preordem(t->ld);
	}
}

int qtd_nos_descendentes(no_arvb* t){
	
	if(t == NULL) return 0;
	
	if(t->le != NULL && t->ld != NULL){
		return 1 + qtd_nos_descendentes(t->le) + qtd_nos_descendentes(t->ld);
	}else{
		return qtd_nos_descendentes(t->le) + qtd_nos_descendentes(t->ld);
	} 
}


int main(){
	no_arvb* raiz = NULL;
	arvb_elemento X;
	int N = 5;
	
	cout << "\nArvore 1\n";
	for(int i = 0; i < N; i++){
		cout << i << "o. = ";
		cin >> X;
		inserir(&raiz, X);
	}
	int v = qtd_nos_descendentes(raiz);
	cout << "Quantidade de nos com 2 descendentes = " << v;
}
