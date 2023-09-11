#include <iostream>

using namespace std;

/* Construir um programa que faz a leitura do nome de uma pessoa e imprima o nome lido
na frase: “Bom dia <nome lido>! Tudo bem?”
Por exemplo se o nome lido for “Peter Pan” a frase impressa deverá ser:
“Bom dia Peter Pan! Tudo bem? */

int main(){
	char nome[30];
	
	cout << "Digite o seu nome: ";
	cin.getline(nome, 30);
	
	cout << "Bom dia " << nome << "! Tudo bem?";
}
