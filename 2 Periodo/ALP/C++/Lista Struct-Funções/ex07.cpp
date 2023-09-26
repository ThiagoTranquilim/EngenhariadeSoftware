#include <iostream>

using namespace std;

/* Construir uma função recursiva que inverte a ordem dos elementos de um vetor.
x que contêm n inteiros. Os valores de x e n deverão ser lidos no main e passados
como parâmetro. A função recursiva deverá ser chamada no main() da seguinte
forma:
int n, x[TAM];
inverte ( x ,0 , n-1) */


#define TAM 5

void inverte(int x[], int t, int n){
	if (t < n) {
        int temp = x[t];
        x[t] = x[n];
        x[n] = temp;

        inverte(x, t + 1, n - 1);
    }
}

int main(){
	int n, x[TAM];
	
	cout << "Digite o valor de N: ";
	cin >> n;
	
	cout << " ----- x[" << TAM << "] -----\n";
	for(int i = 0; i < n; i++){
		cout << "[" << i << "] = ";
		cin >> x[i];
	}
	
	inverte(x, 0, n-1);
	
	for(int i = 0; i < n; i++){
		cout << "[" << i << "] = " << x[i] << endl;
	}
}
