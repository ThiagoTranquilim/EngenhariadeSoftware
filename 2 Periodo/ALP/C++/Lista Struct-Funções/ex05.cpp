#include <iostream>

using namespace std;

/* Construir uma função recursiva que busca um determinado número a em um
vetor x que contém n inteiros. Construir uma função para ler x, n e a. A função
recursiva deverá ser chamada no main() da seguinte forma:
int flag, n, a, x[TAM];
flag = buscar ( x , n-1, a ); Se achou a no vetor então retornar 1 senão retornar 0 */

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

int buscar(int x[], int n, int a){
    for(int i = 0; i <= n; i++){
        if(x[i] == a){
            return 1;
        }
    }
    return 0;
}

int main(){
    int flag, n, a, x[TAM];
    ler(x, &n, &a);
    flag = buscar(x, n-1, a);
    cout << flag;
}