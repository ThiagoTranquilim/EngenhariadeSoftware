#include <iostream>
#include <cstdlib>

using namespace std;

/* Considere uma árvore binária qualquer, cujo nó raiz está
armazenado na variável raiz. Construir uma função que recebe o
endereço do nó raiz e conta quantos nós a árvore possui. Retorna pelo
return número de nós */

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

int quantidade_de_no(no_arvb* raiz){
	no_arvb* p;
	int qtd = 0;
	p = raiz;
	
	if(p == NULL)return 0;
	
	int qtd_esquerda = quantidade_de_no(p->le);
	int qtd_direita = quantidade_de_no(p->ld);
	qtd = 1 + qtd_esquerda + qtd_direita;
	
	return qtd;
}

void preordem(no_arvb* t){
	
	if(t != NULL){
		cout << " " << t->info;
		preordem(t->le);
		preordem(t->ld);
	}
}

int menu(){
	int N;
	cout << "\n --------------------";
	cout << "\n ARVORE DE PESQUISA";
	cout << "\n --------------------";
	cout << "\n\n <<<<< ESCOLHA >>>>>";
	cout << "\n[1] Inserir";
	cout << "\n[2] Quantidade de No";
	cout << "\n[0] Encerrar";
	cout << "\n>>>>>";
	cin >> N;
	return N;
}

int main(){
	no_arvb* raiz = NULL;
	arvb_elemento X;
	int esc, qtd;
	
	while((esc = menu()) != 0){
		switch(esc){
			case 0: cout << "\n\n FIM DO PROGRAMA .....";
				return 0;
			
			case 1: cout << "\n\n <<<<< INSERIR >>>>>";
				cout << "\nINFO = ";
				cin >> X;
				inserir(&raiz, X);
				preordem(raiz);
				break;
			case 2: cout << "\n\n <<<<< QUANTIDADE DE NO >>>>>";
				qtd = quantidade_de_no(raiz);
				cout << "\nA quantidade de no = " << qtd;
				break;
		}
	}
}
