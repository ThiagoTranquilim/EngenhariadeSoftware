#include <iostream>

using namespace std;

/* Construir uma função recursiva que retorna o número de repetições de um
determinado número a em um vetor x que contêm n inteiros. Os valores
de x, n e a deverão ser lidos no main e passados como parâmetro. A função
recursiva deverá ser chamada no main() da seguinte forma:
int repete, n, a, x[TAM];
repete = repeticoes ( x , n-1, a */

#define TAM 5

void ler(int x[], int *n, int *a){
    
    cout << "Digite o valor de n: ";
    cin >> *n;
    
    cout << "\n----- x[" << TAM << "] -----\n";
    for(int i = 0; i < *n; i++){
        cout << "Digite o valor " << i << " : ";
        cin >> x[i];
    }
    
    cout << "Digite o valor de a: ";
    cin >> *a;
}

int repeticoes(int x[], int n, int a){
	int cont = 0;
	
    for(int i = 0; i <= n; i++){
        if(x[i] == a){
            cont++;
        }
    }
    return cont;
}

int main(){
    int repete, n, a, x[TAM];
    ler(x, &n, &a);
    repete = repeticoes(x, n-1, a);
    cout << repete;
}
