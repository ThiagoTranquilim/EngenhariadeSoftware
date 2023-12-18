#include <iostream>
#include <cstdlib>

using namespace std;

/* Considere uma árvore binária qualquer, cujo nó raiz está
armazenado na variável raiz. Construir uma função que recebe o
endereço do nó raiz e localiza um elemento V lido na main e passado
na lista de parâmetros. Se existir na árvore retorne pelo return o
endereço de localização de V na árvore. Caso não exista retorne NULL */

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
	no_arvb* p, *novo;
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

void preordem(no_arvb* t){
	
	if(t != NULL){
		cout << " " << t->info;
		preordem(t->le);
		preordem(t->ld);
	}
}

no_arvb* busca_retorna_endereco(no_arvb* raiz, arvb_elemento V){
	no_arvb* p;
	if(raiz == NULL) return NULL;
	p = raiz;
	while(p != NULL){
		
		if(p->info == V){
			return p;
		}else if(V < p->info){
			p = p->le;
		}else p = p->ld;
	}
	return NULL;
}

int main(){
	no_arvb* raiz, *p;
	raiz = NULL;
	arvb_elemento x;
	int N = 5;
	cout << "\nArvore 1\n";
	for(int i = 0; i < N; i++){
		cout << i << "o. = ";
		cin >> x;
		inserir(&raiz, x);
	}
	cout << "\nDigite o numero a ser buscado = ";
	cin >> x;
	preordem(raiz);
	p = busca_retorna_endereco(raiz, x);
	cout << "\nEndereco do valor buscado = " << p;
}
