#include <iostream>
#include <cstdlib>

using namespace std;

/* Dada uma lista ligada contendo números inteiros desordenados. Construir uma função
que verifica se há algum número repetido na lista ou não. Caso exista alguma
repetição retornar 1 senão retornar 0. Não usar estruturas auxiliares para a solução,
tais como, vetor ou outra lista ligada */

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
	if(novo == NULL)exit(1);
	return novo;
}

void inserir_no(no**pri, elemento a){
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

int repetir(no* pri){
	no* p, *s;
	p = pri;
	s = pri;
	while(p != NULL){
		int verifi = p->info;
		while(s != NULL && s != p){
			if(verifi == s->info){
				return 1;
			}
			s = s->link;
		}
		s = pri;
		p = p->link;
	}
	return 0;
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
	int N, verif;
	
	cout << "Digite o numero de elementos na lista: ";
	cin >> N;
	
	for(int i = 0; i < N; i++){
		valor = ler_elemento(i);
		inserir_no(&pri, valor);
	}
	imprime_lista(pri);
	verif = repetir(pri);
	cout << endl << verif << endl;
}
