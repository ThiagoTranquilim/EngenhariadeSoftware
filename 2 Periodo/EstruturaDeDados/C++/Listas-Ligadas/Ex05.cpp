#include <iostream>
#include <cstdlib>

using namespace std;

/* Dada uma lista ligada contendo números inteiros quaisquer. Construir uma função que
verifica qual o número que se repete mais vezes nessa lista. Retornar a porcentagem
de repetições desse número em relação à lista toda. Não há restrição quanto ao uso de
outras estruturas, apenas não "estrague" a lista dada */

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

int ler_elemento(int i){
	int a;
	cout << "Digite o valor " << i << ": ";
	cin >> a;
	return a;
}

void inserir_inicio(no**pri, elemento a){
	no* novo;
	novo = novo_no();
	novo->info = a;
	novo->link = *pri;
	*pri = novo;
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

float repete(no* pri){
	int N = cont(pri);
	no* p;
	p = pri;
	
	elemento mais_frequente = -1;
	float max = 0;
	
	while(p != NULL){
		int c = 1;
		no* q = p->link;
		
		while(q != NULL){
			if(q->info == p->info){
				c++;
			}
			q = q->link;
		}
		
		if(c > max){
			max = c;
			mais_frequente = p->info;
		}
		
		p = p->link;
	}
	
	float porcentagem = max  / N * 100;
	
	cout << endl << "Elemento mais frequente: " << mais_frequente << endl;
	return porcentagem;
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
	int N;
	float verificacao;
	
	cout << "Digite o numero de elementos na lista: ";
	cin >> N;
	
	for(int i = 0; i < N; i++){
		valor = ler_elemento(i);
		inserir_inicio(&pri, valor);
	}
	imprime_lista(pri);
	verificacao = repete(pri);
	cout << "Procentagem de repeticao: " << verificacao << "% ";
}
