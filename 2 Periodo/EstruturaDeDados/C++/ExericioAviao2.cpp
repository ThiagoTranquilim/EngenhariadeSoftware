#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

#define LINHAS 4
#define COLUNAS 27
#define NUMVOOS 10

typedef struct{
	int numero_voo;
	char origem[20];
	char destino[20];
	int mapa_assentos[LINHAS][COLUNAS];
}voos;

int cabecalho(){
    int opcao;
    
    do{
        cout << " Bem Vindo Cia Aerea ALP \n\n";
        cout << "--------------------\n";
        cout << "1 - Nova Reserva\n";
        cout << "0 - Sair\n";
        cout << "Escolha (1 ou 0): ";
        cin >> opcao;
    }while(opcao < 0 || opcao > 1);
    
    return opcao;
}

int escolhe_voo(voos ALP[]){
	int opcao;
	
	cout << "Bem vindo Cia Aerea ALP" << endl;
	cout << "\n----------------------------------------\n";
	
	do{
		for(int i = 0; i < NUMVOOS; i++){
			cout << i + 1 << " - Voo: " << ALP[i].numero_voo << " DE: " << ALP[i].origem << " PARA: " << ALP[i].destino << endl;
		}
		cout << "Escolha < de 1 a 10 >:";
		cin >> opcao;
	}while(opcao < 1 && opcao > 10);
	
	return opcao;
}

void imprime_mapa(int mapa[][COLUNAS]){
    char PosicaoABC[] = {'A', 'B', 'C', 'D', ' '};
    
    cout << "M A P A  D E  L U G A R E S";
    for(int i = 0; i < LINHAS; i++){
        
        cout << endl;
        cout << PosicaoABC[i] << " | ";
        for(int j = 0; j < COLUNAS; j++){
            cout << setw(4) << left << mapa[i][j];
        }
    }
    cout << endl << " ";
    for(int i = 0; i < COLUNAS; i++){
        cout << setw(4) << right << i + 1;
    }
    
    cout << endl;
}

void escolhe_assento (int mapa[][COLUNAS], char *letra, int *fileira){
    int letraPos;
    do{
        cout << "LETRA <A, B, C ou D>: ";
        cin >> *letra;
        
        if(*letra == 'A' || *letra == 'B' || *letra == 'C' || *letra == 'D'){
            break;
        }
    }while(*letra != 'A' || *letra != 'B' || *letra != 'C' || *letra != 'D');
    
    do{
        
        do{
        cout << "FILEIRA <1 a 27>: ";
        cin >> *fileira;
        
        if(*fileira > 0 && *fileira < 28){
            break;
        }
    }while(*fileira < 0 || *fileira > 27);
    
    switch(*letra){
        
        case 'A':
            letraPos = 0;
            break;
        case 'B':
            letraPos = 1;
            break;
        case 'C':
            letraPos = 2;
            break;
        case 'D':
            letraPos = 3;
            break;
    }
        if(mapa[letraPos][*fileira] == 0){
            cout << "Posicao livre";
            mapa[letraPos][*fileira] = 1;
            return;
    }else
        cout << "Posicao Ocupada!";
    }while(true);
}

void imprime_bilhete (voos Reserva, char letra, int fileira){
    char nome[20];
    int nmrVoo;
    
    cin.ignore();
    cout << "NOME: ";
    cin.getline(nome, 20);
    
    cout << "\n--------------------\n";
    cout << "Numero: " << Reserva.numero_voo << endl;
    cout << "Origem: " << Reserva.origem << endl;
    cout << "Destino: " << Reserva.destino << endl;
    cout << "Assento: " << letra << fileira << endl;
    cout << "\n--------------------\n";
}

int main(){
	voos ALP[NUMVOOS] = { 2334, "Campinas", "Brasilia", {0}, 3456, "Brasilia", "Campinas", {0}, 3354, "Campinas", "Salvador", {0}, 4534, "Salvador", "Joinville", {0}, 4567, "Joinville", "Campinas", {0}, 4655, "Brasilia", "Porto Alegre", {0}, 5422, "Campinas", "Rio de Janeiro", {0}, 5624, "Campinas", "Recife", {0}, 5082, "Recife", "Campinas", {0}, 7022, "Campinas", "Belo Horizonte", {0}}, Reserva;
	int fileira, opcao;
	char letra;
    
    while(cabecalho() != 0){
    	opcao = escolhe_voo(ALP);
        imprime_mapa(ALP[opcao].mapa_assentos);
        escolhe_assento(ALP[opcao].mapa_assentos, &letra, &fileira);
        cout << "\n RESERVA FEITA COM SUCESSO - VERIFIQUE MARCACAO DO SEU ASSENTO " << letra << fileira << " NO MAPA\n";
        imprime_mapa(ALP[opcao].mapa_assentos);
        Reserva = ALP[opcao];
        imprime_bilhete(Reserva, letra, fileira);
    }
    
    return 0;
}
