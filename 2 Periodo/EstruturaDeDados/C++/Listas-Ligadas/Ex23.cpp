#include <iostream>
#include <cstdlib>
#include <string.h>

using namespace std;

/* Dada uma lista ligada contendo, em cada nó, um caractere referente à uma frase.
Construir uma função que elimina todos os nós que possuem a vogal 'a' */

typedef char elemento;

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

int excluir_letra(no** pri){
	no* p, *anterior;
	p = *pri;
	anterior = NULL;
	
	while(p != NULL){
		
		if(p->info == 'a'){
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
	int tam;
	char palavra[15];
	
	cout << "Digite a palavra: ";
	cin.getline(palavra, 15);
	
	tam = strlen(palavra);
	for(int i = 0; i < tam; i++){
		inserir_final(&pri, palavra[i]);
	}
	
	imprimir(pri);
	
	excluir_letra(&pri);
	
	cout << endl;
	imprimir(pri);
}
