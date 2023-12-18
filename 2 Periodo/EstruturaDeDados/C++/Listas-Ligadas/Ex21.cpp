#include <iostream>
#include <cstdlib>

using namespace std;

/* Dada uma lista ligada contendo n�meros inteiros. Construir uma fun��o que elimina
todos os n�s com conte�do par */

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

int excluir_par(no** pri){
	no* p, *anterior;
	p = *pri;
	anterior = NULL;
	
	while(p != NULL){
		
		if(p->info % 2 == 0){
			if(anterior == NULL){
				*pri = p->link;
			}else{
				anterior->link = p->link;
			}
			free(p);
		}else{
			anterior = p;
		}
		
		if(anterior != NULL){
			p = anterior->link;
		}else{
			p = *pri;
		}
	}
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
	
	excluir_par(&pri);
	
	cout << endl;
	imprimir(pri);
}
