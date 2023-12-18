#include <iostream>
#include <cstdlib>

using namespace std;

/* Dada uma lista ligada contendo números inteiros. Construir uma função que elimina o
nó seguinte à um nó, contendo a informação armazenada num certo X, lido. Se X não
existir na lista ou não existir o nó seguinte ao de X, retornar zero pelo return. Caso
exista X e o seguinte, eliminar o seguinte e retornar 1 pelo return */

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

int excluirSeguinte(no** pri, elemento a){
	no* p, *anterior;
	p = *pri;
	anterior = NULL;
	
	while(p != NULL){
		no* aux;
		aux = p->link;
		if(p->info == a){
			if(p->link == NULL){
				return 0;
			}else{
				p->link = aux->link;
			}
		}
		p = p->link;
	}
	return 0;
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
	
	excluirSeguinte(&pri, 5);
	
	cout << endl;
	imprimir(pri);
}
