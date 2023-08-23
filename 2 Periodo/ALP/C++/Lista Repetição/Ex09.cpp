#include <iostream>
#include <iomanip>

using namespace std;

/* Escrever um programa que faz a impress�o de uma tabela de
convers�o libras para quilogramas. Os valores da tabela em libras
devem iniciar em 1 e depois seguir de 5 em 5, at� N inclusive, se
for m�ltiplo de 5. Isto �, valor libras = 1, 5, 10, 15, 20, 25, ....O
valor de N deve ser lido */

int main(){
	int quilograma, N;
	
	cin >> N;
	
	quilograma = 1;
	for(int libra=1; libra <= N; libra++){
		quilograma = libra * 5;
		
		cout << setw(10) << "libra: " << libra << " | quilograma: " << quilograma << endl; 
	}
	
	return 0;
}
