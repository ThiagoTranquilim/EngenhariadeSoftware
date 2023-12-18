#include <iostream>
#include <cstdlib>

using namespace std;

/* Construir uma função que cria uma lista com 50 elementos, onde cada elemento da
lista é um termo da seguinte série:
1!/1 - 2!/3 + 3!/5 - 4!/7 + 5!/9 - 6!/11 + 7!/13 - 8!/15
*/

typedef float elemento;

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

void imprime_lista(no* pri){
	no* p;
	p = pri;
	
	while(p != NULL){
		cout << " " << p->info;
		p = p->link;
	}
}

int main(){
	bool a = true;
	int fat;
	no* pri;
	pri = no_init();
	elemento valor = 0;
	
	fat = 1;
	for(float i = 1, j = 1; i <= 50; i++, j+=2){
		fat *= i;
		
		if(a == true){
			valor += (fat / j);
			a = false;
		}else{
			valor -= (fat / j);
			a = true;
		}
		inserir_final(&pri, valor);
		cout << i << " / " << j << " " << valor << endl;
	}
	
	imprime_lista(pri);
}
