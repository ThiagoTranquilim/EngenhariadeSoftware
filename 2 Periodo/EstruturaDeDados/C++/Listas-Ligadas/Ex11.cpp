#include <iostream>
#include <cstdlib>

using namespace std;

/* Dada uma lista ligada contendo em cada nó um caractere referente à uma palavra.
Construir uma função que insere entre cada caractere da palavra, um nó com o
caractere '*'. Não usar estruturas auxiliares para a solução, tais como, vetor ou outra
lista ligada */

typedef char elemento;

typedef struct no{
	elemento info;
	no* link;
}no;

no* no_init(){
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

void inserir_final(no**pri, elemento a){
	no* novo;
	novo = novo_no();
	novo->info = a;
	novo->link = NULL;
	no* p = *pri;
	
	while(p != NULL && p->link != NULL){
		p = p->link;
	}
	if(p == NULL){
		*pri = novo;
	}else
		p->link = novo;
}

void inserirA(no**pri, elemento a){
	no* novo;
	no* p = *pri;
	
	while(p != NULL && p->link != NULL){
		novo = novo_no();
		novo->info = a;
		novo->link = p->link;
		p->link = novo;
		p = novo->link;
	}
}

void imprime_lista(no* pri){
	no* p;
	p = pri;
	
	while(p != NULL){
		cout << " " << p->info;
		p = p->link;
	}
}

int main(){
	int N;
	char vet[10];
	no* pri;
	pri = no_init();
	elemento valor;
	
	cout << "Digite a string: ";
	cin.getline(vet, 10);
	
	for(int i = 0; vet[i] != '\0'; i++){
		inserir_final(&pri, vet[i]);
	}
	
	valor = '*';
	inserirA(&pri, valor);
	imprime_lista(pri);
}
