#include <iostream>

using namespace std;

/* Considere o mesmo problema anterior, porém com OUTRA forma de armazenamento dos
coeficientes. Considere armazenar os coeficientes (a, b, c, d, e, f) em um vetor com 6
posições, uma para cada um dos coeficientes. Exemplo: supor os valores dos coeficientes
a = 3, b = 2, c = 2, d = 3, e = 5, f = 1
3 2 2 3 5 1
Divisão de módulos:
a) Função1: que faz a leitura dos coeficientes e os armazena no vetor A comunicação das
informações lidas deverá ser pela lista de parâmetros.
PROTÓTIPO: : void ler_coeficientes (int v[ ]);
b) Função2: que recebe o endereço do vetor dos coeficientes e calcula x e y. A comunicação
do x e do y deverá ser pela lista de parâmetros. Testar se não resulta em divisão por zero.
Se resultar em zero, devolver pelo return o valor 0 (zero). Se não resultar em divisão por
zero, devolver pelo return o valor 1 (um);
PROTÓTIPO: int sistema (int v[ ], float*x, float *y);
c) Função3 que recebe o endereço do vetor dos coeficientes, os valores de x y e o valor de
retorno do comando return (todos pela lista de parâmetros) e imprime os coeficientes e
de acordo com o valor do return da função anterior imprimir mensagem: “Sistema sem
solucao" e não imprimir x e y ou imprimir a solução do sistema;
PROTÓTIPO: void imprime (int v[ ], float x, float y, int flag);
e) a função main() que define as variáveis do problema e chama as funções definidas */

void ler_coeficientes(int v[]){
	
	for(int i = 0; i < 6; i++){
		cout << "[ " << i << "] = ";
		cin >> v[i];
	}
}

int sistema(int v[], float *x, float *y){
	
	if(((v[0] * v[4]) - (v[1] * v[3])) == 0){
		return 0;
	}else{
		*x = ((v[2] * v[4]) - (v[1] * v[5]))/((v[0] * v[4]) - (v[1] * v[3]));
		*y = ((v[0] * v[5]) - (v[2] * v[3]))/((v[0] * v[4]) - (v[1] * v[3]));
		return 1;
	}
}

void imprime(int v[], float x, float y, int verificacao){
	
	for(int i = 0; i < 6; i++){
		cout << "[" << i << "] = " << v[i];
	}
	
	if(verificacao == 0){
		cout << "Sistema sem solucao";
		return;
	}else{
		cout << "\n";
		cout << "x: " << x << endl;
		cout << "y: " << y << endl;
	}
}

int main(){
	int v[6], verificacao;
	float x, y;
	
	ler_coeficientes(v);
	verificacao = sistema(v, &x, &y);
	imprime(v, x, y, verificacao);
}
