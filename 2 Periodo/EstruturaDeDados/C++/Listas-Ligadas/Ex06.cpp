#include <iostream>
#include <cstdlib>

using namespace std;

/* onstruir uma fun��o que cria uma lista ligada para conter em cada n� um n�mero
inteiro com a seguinte regra: o 1� elemento dever� ser igual a 1, o 2� � igual ao
primeiro*2, o 3� igual ao segundo *2, e assim por diante. Parar quando o c�lculo do
elemento for maior do que 1000. N�o inserir o resultado maior do que 1000 */

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

int cont(no* pri){
	int c = 1;
	no* p;
	p = pri;
	
	while(p != NULL && p->link != NULL){
		c++;
		p = p->link;
	}
	return c;
}

int inserir_final(no**pri, elemento a){
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
	
	return a;
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
	int aux;
	no* pri;
	pri = no_init();
	elemento valor = 1;
	
	do{
		aux = inserir_final(&pri, valor);
		valor = aux * 2;
	}while(valor < 1000);
	imprime_lista(pri);
}
