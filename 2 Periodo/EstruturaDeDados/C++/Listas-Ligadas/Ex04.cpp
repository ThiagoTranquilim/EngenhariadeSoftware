#include <iostream>
#include <cstdlib>

using namespace std;

/* Dada uma lista ligada contendo números inteiros. Construir uma função que verifica se
a lista está ordenada ou não. Se ordenada retornar 1 senão retornar 0. Não usar
estruturas auxiliares para a solução, tais como, vetor ou outra lista ligada */

typedef int elemento;

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

void inserir_inicio(no**pri, elemento a){
	no* novo;
	novo = novo_no();
	novo->info = a;
	novo->link = *pri;
	*pri = novo;
}

int ler_elemento(int i){
	int a;
	cout << "Digite o valor " << i << ": ";
	cin >> a;
	return a;
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

int ordenada(no* pri){
	no* p = pri;
	elemento anterior = p->info;
	
	while(p != NULL && p->link != NULL){
		p = p->link;
		
		if(anterior > p->info){
			return 0;
		}
		anterior = p->info;
	}
	return 1;
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
	no* pri;
	pri = no_init();
	elemento valor;
	int N, verificacao;
	
	cout << "Digite o numero de elementos na lista: ";
	cin >> N;
	
	for(int i = 0; i < N; i++){
		valor = ler_elemento(i);
		inserir_final(&pri, valor);
	}
	imprime_lista(pri);
	verificacao = ordenada(pri);
	cout << endl << verificacao << endl;
}
