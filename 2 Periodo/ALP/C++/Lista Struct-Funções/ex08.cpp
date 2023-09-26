#include <iostream>
#include <string.h>

using namespace std;

/* Construir uma fun��o recursiva que verifica se uma cadeia de caracteres (string) str
� um pal�ndromo ou n�o. A string str dever� ser lida no main e passada como
par�metro. A fun��o recursiva dever� ser chamada no main() da seguinte forma:
int n, flag;
char str [TAM];
n =strlen(str);
flag = palindromo ( str, 0, n-1) */

#define TAM 100

int palindromo(char str[], int t, int n){
	if(t < n){
		char temp = str[t];
		if(temp != str[n]){
			return 0;
		}else
			palindromo(str, t + 1, n - 1);
	}else
		if(t == n){
			return 1;
		}
}

int main(){
	int n, flag;
	char str[TAM];
	cout << "Digite a string: ";
	cin.getline(str, TAM);
	n = strlen(str);
	flag = palindromo(str, 0, n -1);
	cout << flag;
}
