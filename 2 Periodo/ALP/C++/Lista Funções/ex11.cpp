#include <iostream>

using namespace std;

/* Construir um programa que faz a leitura de duas cadeias de caracteres (string) X e Y, com
tamanhos diferentes e, monta uma terceira cadeia de caracteres (string) Z contendo os
valores das duas strings lidas, de forma intercalada. Isto é, intercalar os caracteres das
duas strings. Exemplo: supor duas strings:
Str1: “casa amarela”
Str2: “grande girassol”
Resultado: cgarsaan daem agrierlaassol”
Imprimir as strings: lidas e a calculada. Dividir o programa no seguinte conjunto de funções
– a divisão apenas para estudo – não justifica criar uma função só para ler uma string
estática:
função1: leitura de uma cadeia de caracteres. (chamada duas vezes)
PROTÓTIPO: void ler_frase( char f[ ]);
função2: recebe duas cadeias de caracteres e monta a terceira como descrito
acima.
PROTÓTIPO: void intercala( char f1[ ], char f2[ ], char inter[ ]);
função main: define as variáveis do problema e chama as funções. A função 1, chamar
duas vezes */

void ler_f(char f[]){
	
	cin.getline(f, 100);
}

void intercala(char f[], char f2[], char inter[]){
	
	int i = 0;
    int j = 0;
    int k = 0;

    while (f[i] != '\0' || f2[j] != '\0') {
        if (f[i] != '\0') {
            inter[k++] = f[i++];
        }
        if (f2[j] != '\0') {
            inter[k++] = f2[j++];
        }
    }

    inter[k] = '\0';
}

int main(){
	char f[100], f2[100], inter[100];
	ler_f(f);
	ler_f(f2);
	intercala(f, f2, inter);
	cout << f << endl;
	cout << f2 << endl;
	cout << inter;
}
