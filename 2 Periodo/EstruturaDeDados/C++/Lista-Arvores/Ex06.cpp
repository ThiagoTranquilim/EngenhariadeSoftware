#include <iostream>
#include <cstdlib>

using namespace std;

/* Dadas duas �rvores bin�rias de pesquisa A e B, uma apontada por
raizA e outra raizB. Construir uma fun��o que verifica se a �rvore B
est� contida na A. A �rvore B � uma �rvore com apenas dois n�veis
compondo uma fam�lia nodal completa. Isto �, B � uma �rvore
composta pelo n� raiz, descendente esquerdo e descendente direito.
Retornar pelo return 1, se sim e 0 se n�o */

typedef int arvb_elemento;
typedef struct no_arvb{
	arvb_elemento info;
	no_arvb* le, *ld;
}no_arvb;

no_arvb* novo_no_arvb(){
	no_arvb* nv;
	nv = (no_arvb*)malloc(sizeof(no_arvb));
	if(nv == NULL)exit(1);
	nv->le = nv->ld = NULL;
	return nv;
}

void inserir(no_arvb** raiz, arvb_elemento A){
	no_arvb* p;
	no_arvb* novo;
	novo = novo_no_arvb();
	novo->info = A;
	
	if(*raiz == NULL){
		*raiz = novo;
		return;	
	}
	p = *raiz;
	while(p != NULL){
		
		if(A < p->info){
			
			if(p->le != NULL){
				p = p->le;
			}else{
				p->le = novo;
				return;
			}
		}else{
			
			if(p->ld != NULL){
				p = p->ld;
			}else{
				p->ld = novo;
				return;
			}
		}
	}
}

int comp(no_arvb* raiz, no_arvb* raiz2){
	no_arvb* p, *p2;
	no_arvb* pai, *pai2;
	p = raiz;
	p2 = raiz2;
	
	if(raiz == NULL || raiz2 == NULL) return 0;
	
	if (raiz->le != NULL && raiz2->le != NULL){
		if(raiz->le->info == raiz2->le->info){
			if(raiz->ld != NULL && raiz2->ld != NULL){
				if(raiz->ld->info == raiz2->ld->info){
					return 1;
				}
			}
		}
	}
	return 0;
}

void preordem(no_arvb* t){
	
	if(t != NULL){
		cout << " " << t->info;
		preordem(t->le);
		preordem(t->ld);
	}
}

int main(){
	no_arvb* raiz, *raiz2;
	raiz = NULL; raiz2 = NULL;
	arvb_elemento x;
	int N = 5, v;
	
	cout << "\nArvore 1\n";
	for(int i = 0; i < N; i++){
		cout << i << "o. = ";
		cin >> x;
		inserir(&raiz, x);
	}
	cout << "\nArvore 2\n";
	for(int i = 0; i < 3; i++){
		cout << i << "o. = ";
		cin >> x;
		inserir(&raiz2, x);
	}
	preordem(raiz);
	cout << endl;
	preordem(raiz2);
	
	v = comp(raiz, raiz2);
	if(v){
		cout << "\nArvore contida em outra";
	}else{
		cout << "\nArvore nao contida";
	}
}
