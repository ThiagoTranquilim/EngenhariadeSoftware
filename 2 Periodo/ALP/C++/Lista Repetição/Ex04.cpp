#include <iostream>

using namespace std;

/* Construir um programa que faz a leitura de duas notas de um aluno,
N1 e N2, e os respectivos pesos, P1 e P2. O programa deve calcular a
m�dia ponderada alcan�ada por aluno e apresentar:
a. A mensagem "Aprovado", se a m�dia alcan�ada for maior ou
igual a sete;
b. A mensagem "Reprovado", se a m�dia for menor do que sete;
c. A mensagem "Aprovado com Distin��o", se a m�dia for igual a
dez */

int main(){
	float N1, N2, P1, P2, media;
	
	cout << "Digite as notas: ";
	cin >> N1;
	cin >> N2;
	
	cout << "Digite os pesos: ";
	cin >> P1;
	cin >> P2;
	
	media = ((N1 * P1) + (N2 * P2))/(P1 + P2);
		
	if(media == 10){
		cout << "Aprovado com distincao";
	}else
		if(media >= 7){
			cout << "Aprovado";
		}else
			cout << "Reprovado";
				
	return 0;
}
