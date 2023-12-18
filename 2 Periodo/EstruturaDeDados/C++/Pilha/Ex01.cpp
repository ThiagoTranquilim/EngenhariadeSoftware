#include <iostream>
#include <windows.h>
#include <stdlib.h>
#define TAM 6

using namespace std;
typedef int stack_element;

#include "stack_ld.h"

typedef struct {
    int numero_elementos;
    Stack pilha;
}Tubo;

void iniciar_vazias(Tubo T[]){
    for(int i = 0; i < TAM; i++){
        initStack(T[i].pilha);
        T[i].numero_elementos = 0;
    }
}

void distribuir(Tubo T[]){
	int freq[TAM - 1] = {0}, num;
	
	for(int i = 0; i < TAM - 1; i++){
		for (int j = 1; j <= TAM - 1; j++) {
		
		do{
			num = rand() % (TAM - 1);
		}while(freq[num] == TAM - 1);
		
		freq[num]++;
		push(T[i].pilha, num + 1);
		T[i].numero_elementos++;
    	}
	}
}

void mudacor(int cor){
    HANDLE Saida;
    Saida = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(Saida, cor);
}

void printa_cor(int I){
    int cor[5] = {9, 13, 2, 15, 6};
    mudacor(cor[I-1]);
    cout << 'O';
    mudacor(15);
}

void mostrar(Tubo T[]){
	Stack aux[TAM];
	
	for(int i = 0; i < TAM; i++){
		initStack(aux[i]);
	}
	
	for(int i = 0; i < TAM; i++){
		
		for(int j = 0; j < TAM; j++){
			if(!isEmpty(T[j].pilha)){
				int v = pop(T[j].pilha);
				push(aux[j], v);
				T[j].numero_elementos--;
				cout << " | "; printa_cor(v); cout << " |\t";
			}else{
				cout << " |   |\t";
			}
		}
		
		cout << endl;
	}
	for(int i = 0; i < TAM; i++){
		cout << " ----- \t";
	}
	cout << endl;
	for(int i = 1; i <= TAM; i++){
		cout << "   " << i << "    ";
	}
	cout << endl;
	
	for(int i = 0; i < TAM; i++){
		while(!isEmpty(aux[i])){
			int v = pop(aux[i]);
			push(T[i].pilha, v);
			T[i].numero_elementos++;
		}
	}
}

int validar(Tubo T[], int o, int d){
	
	if(isEmpty(T[o - 1].pilha)){
		cout << "\nPilha vazia\n";
	}else if(T[d - 1].numero_elementos == TAM - 1){
		cout << "\nPilha cheia\n";
	}else{
		stack_element v = pop(T[o - 1].pilha);
		push(T[d - 1].pilha, v);
		T[o - 1].numero_elementos--;
		T[d - 1].numero_elementos++;
		return 1;
	}
	
}

int validar_fim(Tubo T[]) {
    for (int i = 0; i < TAM; i++) {
        if (isEmpty(T[i].pilha)) {
            cout << "\nPilha vazia\n";
            return 1;
        }

        Stack aux;
        initStack(aux);

        stack_element topo = pop(T[i].pilha);
        push(aux, topo);

        while (!isEmpty(T[i].pilha)) {
            stack_element proximo = pop(T[i].pilha);

            if (proximo != topo) {
                push(T[i].pilha, proximo);
                while (!isEmpty(aux)) {
                    push(T[i].pilha, pop(aux));
                }
                return 1;
            }

            push(aux, proximo);
        }

        while (!isEmpty(aux)) {
            push(T[i].pilha, pop(aux));
        }
    }

    return 0;
}


int jogada(Tubo T[]){
	int origem, destino, v, q;
	
	do{
		
		cout << "\nORIGEM <1 A 6 (-1 sair)>: ";
		cin >> origem;
		cout << "\nDESTINO <1 A 6 (-1 sair)>: ";
		cin >> destino;
		
		if(origem == -1 || destino == -1){
			exit(0);
		}
		
		v = validar(T, origem, destino);
	}while(v != 1);
	
	q = validar_fim(T);
	system("cls");
	return q;
}

int main(){
    Tubo T[TAM];
    int repetir = 1, retorno;
    do{
        iniciar_vazias(T);
        distribuir(T);
        mostrar(T);
        
        do{
            retorno = jogada(T);
            mostrar(T);
            if(retorno == 0)break;
        }while(retorno);
        
        mostrar(T);
        cout << "\nPARABENS!";
        cout << "\nJogar Novamente? 1(sim) ou 0 (nao): "; cin >> repetir;
    }while(repetir);
    cout << "Fim de jogo!" << endl;
    return 0;
}
