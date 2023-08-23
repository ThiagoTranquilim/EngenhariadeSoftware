#include <iostream>

using namespace std;

/*  A prefeitura de uma cidade fez uma pesquisa entre seus habitantes,
coletando dados sobre o sal�rio e n�mero de filhos. A prefeitura deseja
saber:
a. m�dia do sal�rio da popula��o;
b. m�dia do n�mero de filhos;
c. maior sal�rio;
d. percentual de pessoas com sal�rio at� R$1500,00 */

int main(){
	int qtdHabitantes, numeroFilho;
	float mediaSalario = 0, salario, mediaFilho = 0, maiorSalario, percentualSalario = 0;
	
	cin >> qtdHabitantes;
	
	cout << "Pessoa 0: " << endl;
	cout << "Digite seu salario: ";
	cin >> salario;
	cout << "Digite o numero de filhos: ";
	cin >> numeroFilho;
	
	mediaSalario += salario;
	mediaFilho += numeroFilho;
	maiorSalario = salario;
	
	if(salario >= 1500){
		percentualSalario++;
	}
	
	for(int i = 1; i < qtdHabitantes; i++){
		cout << "Pessoa " << i << ": " << endl;
		cout << "Digite seu salario: ";
		cin >> salario;
		cout << "Digite o numero de filhos: ";
		cin >> numeroFilho;
		
		if(salario > maiorSalario){
			maiorSalario = salario;
		}
		if(salario >= 1500){
		percentualSalario++;
		}
		
		mediaSalario += salario;
		mediaFilho += numeroFilho;
	}
	
	mediaSalario = mediaSalario / qtdHabitantes;
	mediaFilho = mediaFilho / qtdHabitantes;
	percentualSalario = (percentualSalario * qtdHabitantes) / 100;
	
	cout << "Media salario: " << mediaSalario << endl;
	cout << "Media filho: " << mediaFilho << endl;
	cout << "Maior salario: " << maiorSalario << endl;
	cout << "Percentual salario 1500: " << percentualSalario << endl;
	
}
