#include <iostream>

using namespace std;

/* Construir uma função recursiva que faz a soma dos n primeiros numeros naturais.
O valor para n deverá ser lido no main e passado como parâmetro. A função
recursiva deverá ser chamada no main() da seguinte forma:
int total, n;
total = soma(n); */

int soma(int n){
    int soma = 0;
    for(int i = 0; i <= n; i++){
        soma += i;
    }
    return soma;
}

int main(){
    int total, n;
    cout << "Digite o valor de n: ";
    cin >> n;
    total = soma(n);
    cout << "total: " << total;
}
