#include <iostream>
#include <cstdlib>

typedef int arvb_elemento;

using namespace std;

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

void inserir(no_arvb ** raiz, int A){
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

int eliminar(no_arvb** t , int a){
	no_arvb* p, *pai, *desc, *aux;
	p = *t;
	pai = NULL;
	
	while(p != NULL && p->info != a){
		pai = p;
		p = (a<p->info)? p->le: p->ld;
	}
	if(p == NULL) return 0;
	
	if(p->le == NULL){
		desc = p->ld;
	}else if(p->ld == NULL){
		desc = p->le;
	}else{
		aux = p;
		desc = p->ld;
		while(desc->le != NULL){
			aux = desc;
			desc = desc->le;
		}
		if(aux != p){
			aux->le = desc->ld;
			desc->ld = p->ld;
		}
		desc->le = p->le;
	}
	if(pai == NULL){
		*t = desc;
	}else if(a < pai->info)
		pai->le = desc;
	else pai->ld = desc;
	free(p);
	return 1;
}

int buscar(no_arvb* raiz, int x){
	no_arvb* p;
	p = raiz;
	
	while(p != NULL){
		
		if(p->info == x){
			return 1;
		}
		if(x > p->info){
			p = p->ld;
		}else{
			p = p->le;
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

void inordem(no_arvb* t){
	if(t != NULL){
		inordem(t->le);
		cout << " " << t->info;
		inordem(t->ld);
	}
}

void posordem(no_arvb* t){
	if(t != NULL){
		posordem(t->le);
		posordem(t->ld);
		cout << " " << t->info;
	}
}

int menu(){
	int N;
	cout << "\n --------------------";
	cout << "\n ARVORE DE PESQUISA";
	cout << "\n --------------------";
	cout << "\n\n <<<<< ESCOLHA >>>>>";
	cout << "\n[1] Inserir";
	cout << "\n[2] Buscar";
	cout << "\n[3] Percorrer - pre-ordem";
	cout << "\n[4] Percorrer - in-ordem";
	cout << "\n[5] Percorrer - pos-ordem";
	cout << "\n[6] Eliminar";
	cout << "\n[0] Encerrar";
	cout << "\n>>>>>";
	cin >> N;
	return N;
}

int main(){
	no_arvb* raiz = NULL;
	arvb_elemento X;
	int esc;
	
	while((esc = menu()) != 0){
		switch(esc){
			case 0: cout << "\n\n FIM DO PROGRAMA .....";
				return 0;
			
			case 1: cout << "\n\n <<<<< INSERIR >>>>>";
				cout << "\nINFO = ";
				cin >> X;
				inserir(&raiz, X);
				break;
			case 2: cout << "\n\n <<<<< BUSCAR >>>>>";
				cout << "\n >>>>> " << (buscar(raiz, X)? "Existe" : "Nao Existe") << endl;
				break;
			case 3: cout << "\n\n <<<<< PRE-ORDEM >>>>>";
				preordem(raiz);
				break;
			case 4: cout << "\n\n <<<<< IN-ORDEM >>>>>";
				inordem(raiz);
				break;
			case 5: cout << "\n\n <<<<< POS-ORDEM >>>>>";
				posordem(raiz);
				break;
			case 6: cout << "\n\n <<<<< ELIMINAR >>>>>";
				cout << "\nINFO = ";
				cin >> X;
				cout << "\n >>>>> " << (eliminar(&raiz, X)? "Eliminado com sucesso" : "Nao Existe") << endl;
				break;
		}
	}
}
