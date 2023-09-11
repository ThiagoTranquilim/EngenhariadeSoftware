#include <iostream>

using namespace std;

/* Feito por Thiago tranquilim, Higor Longuim e Nicolas Papa */

int main(){
	char nome[10], Gabarito[10] = {'a', 'b', 'c', 'd', 'e', 'a', 'b', 'c', 'd', 'e'}, Respostas[10];
	int RA, nota = 0, aprovados = 0, Frequencia[11] = {0}, total = 0, maiorNotaAbsoluta, notaFrequencia;
	float media = 0, mediatotal, maior5;
	
	do{
		cout << "Digite seu RA: ";
		cin >> RA;
		if(RA == 9999){
			break;
		}
		
		cout << "Digite seu nome: ";
		cin >> nome;
		
		nota = 0;
		
		for(int i = 0; i < 10; i++){
			cout << "Resposta " << i << " : ";
			cin >> Respostas[i];
		}
		
		for(int i = 0; i < 10; i++){
			
			if(Respostas[i] == Gabarito[i]){
				nota++;
			}
		}
		Frequencia[nota] = Frequencia[nota] + 1;
		
		if(nota >= 5){
			aprovados++;
		}
		media += nota;
		
		cout << "RA: " << RA <<endl;
		cout << "Nome: " << nome << endl;
		cout << "Nota: "<< nota << endl;
		total++;
	}while(RA < 9999);
	
	maiorNotaAbsoluta = Frequencia[0];
	notaFrequencia = 0;
	for(int i = 0; i < 11; i++){
		
		if(Frequencia[i] > maiorNotaAbsoluta){
			maiorNotaAbsoluta = Frequencia[i];
			notaFrequencia = i;
		}
		cout << endl << "Frequencia " << i << " : " << Frequencia[i] << endl;
	}
	
	
	maior5 = (aprovados * 100) / total;
	mediatotal = media / total;
	cout << "Total de aprovados e: " << aprovados;
	cout << "\nO total de provas corrigidas e: " << total;
	cout << "\nA porcentagem de aprovados e: " << maior5;
	cout << "\nNota com maior frequencia absoluta e: " << notaFrequencia;
	cout << "\nA media e: " << mediatotal;
	
	return 0;
}
