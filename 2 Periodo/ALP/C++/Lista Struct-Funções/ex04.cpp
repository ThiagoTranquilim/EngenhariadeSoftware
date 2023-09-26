#include <iostream>

using namespace std;

/* Construir uma funcao recursiva que calcula a n-esima potencia de um
numero x inteiro. Os valores de x e n deverão ser lidos no main e passados como
parametros. A função recursiva deverá ser chamada no main() da seguinte forma:
int total, n, x;
total = pot ( x , n ) */

int pot(int x, int n){
    int k;
    k = x;
    for(int i = 1; i < n; i++){
        x*= k;
    }
    return x;
}

int main(){
    int n, total, x;
    cout << "Digite x: ";
    cin >> x;
    cout << "Digite n: ";
    cin >> n;
    total = pot(x, n);
    cout << "total: " << total;
}
