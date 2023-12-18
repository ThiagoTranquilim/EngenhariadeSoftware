#include <iostream>
#include <cstdlib>

using namespace std;

/* Dada uma lista ligada contendo n�meros inteiros. Construir uma fun��o que elimina o
primeiro n� da lista e coloca no seu lugar o �ltimo n� da lista. O �ltimo n� dever� ser
"desligado" do final e "ligado" no in�cio. N�o gere novo n� e nem troque as
informa��es entre os n�s. Somente fa�a o rearranjo dos link's */

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

int rearranjoLink(no** pri){
	no* p, *anterior;
	p = *pri;
	anterior = NULL;
	
	if(*pri == NULL){
		return -1;
	}
	while(p != NULL && p->link != NULL){
		anterior = p;
		p = p->link;
	}
	if(p == NULL){
		return 0;
	}
	if(p->link == NULL){
		anterior->link = NULL;
		no* aux = *pri;
		p->link = aux->link;
		*pri = p;
	}
	return 1;
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
	
	rearranjoLink(&pri);
	
	cout << endl;
	imprimir(pri);
}
