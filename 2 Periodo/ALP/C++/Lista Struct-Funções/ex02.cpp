#include <iostream>

using namespace std;

/* Construir um programa que define uma struct aluno com os campos: (ra: string,
nome: string, nota: float), descobre qual dos alunos possui nota maior e imprime
os dados apenas do aluno que possui maior nota. Dividir o programa em módulos:
a. Função 1: leitura de N e das informações dos N alunos.
b. Função 2: recebe os dados dos N alunos e descobre qual possui a maior
nota. TODOS os dados do aluno que possuir maior nota devem retornar
pelo return. Não retornar apenas a posição que está no vetor.
c. Função 3: imprime as informações de UM aluno.
d. Main: define as variáveis do problema e chama as funções. Caso tenha mais
de um aluno com nota maior, retorne qualquer um deles. Definir o
tamanho físico para 100 elementos */

struct ALUNOS{
    char RA[20];
    char nome[20];
    float nota;
};

void insereAluno(ALUNOS aluno[], int *N){
    
    cout << "Digite a quantidade de alunos: ";
    cin >> *N;
    
    for(int i = 0; i < *N; i++){
        cout << "\n----------\n";
        cout << "RA: ";
        cin >> aluno[i].RA;
        cout << "Nome: ";
        cin >> aluno[i].nome;
        cout << "Nota: ";
        cin >> aluno[i].nota;
        cout << "\n----------\n";
    }
}

ALUNOS maiorNota(ALUNOS aluno[], int N){
    float maiorNota = aluno[0].nota;
    int k;
    
    for(int i = 0; i < N; i++){
        
        if(aluno[i].nota > maiorNota){
            
            maiorNota = aluno[i].nota;
            k = i;
        }
    }
    return aluno[k];
}

void imprimeAluno(ALUNOS aluno){
    
    cout << "\n----------\n";
    cout << "RA: " << aluno.RA << endl;
    cout << "Nome: " << aluno.nome << endl;
    cout << "Nota: " << aluno.nota << endl;
    cout << "\n----------\n";
}

int main(){
    int N;
    ALUNOS aluno[100], alunoMaiorNota;
    
    insereAluno(aluno, &N);
    alunoMaiorNota = maiorNota(aluno, N);
    imprimeAluno(alunoMaiorNota);
}
