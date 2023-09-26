#include <iostream>

using namespace std;

/* Construir um programa que define uma struct produto com os campos: código
(int), nome (string), quantidade em estoque (int) , preco(float). Faz a leitura de N
produtos e os armazena em um arranjo. Adiciona à quantidade em estoque uma
nova quantidade de um determinado produto comprado pela empresa. Por
exemplo: suponha que a quantidade em estoque do produto “cadeira” seja 15 e o
dono da empresa compra mais 20 cadeiras. Seu programa deve acrescentar esta
nova quantidade: 20, à quantidade em estoque anterior: 15. Assim, a quantidade
atual do produto será 35. Para buscar um determinado produto para a atualização
do estoque, usar como entrada o código do produto. Dividir o programa em
módulos.
a. Função 1:faz a leitura do N e das informações de N produtos, armazenando-
os num vetor.
b. Função 2: recebe os dados de N produtos, faz a leitura de um código e a
quantidade comprada, busca o produto na tabela e adiciona a quantidade
comprada à quantidade em estoque.
c. Função 3: imprime as informações de N produtos.
d. Main: define as variáveis do problema e chama as funções. Definir o
tamanho físico para 100 elementos */

struct PRODUTOS{
    int codigo;
    char nome[20];
    int qtdEstoque;
    float preco;
};

void inserirProduto(PRODUTOS produto[], int *N){
    cout << "Digite a quantidade de produtos: ";
    cin >> *N;
    
    for(int i = 0; i < *N; i++){
        cout << "\n--------------------\n";
        cout << "Produto Codigo: ";
        cin >> produto[i].codigo;
        cout << "Produto Nome: ";
        cin >> produto[i].nome;
        cout << "Qtd Estoque: ";
        cin >> produto[i].qtdEstoque;
        cout << "Produto Preco: ";
        cin >> produto[i].preco;
        cout << "\n--------------------\n";
    }
}

void adicionarQuantidade(PRODUTOS produto[], int N){
    int cod, qtdAdicionar;
    
    cout << "Digite o codigo do produto: ";
    cin >> cod;
    cout << "Digite a quantidade a ser adicionada: ";
    cin >> qtdAdicionar;
    
    for(int i = 0; i < N; i++){
        
        if(produto[i].codigo == cod){
            produto[i].qtdEstoque += qtdAdicionar;
        }
    }
}

void imprimeProdutos(PRODUTOS produto[], int N){
    
    for(int i = 0; i < N; i++){
        cout << "\n--------------------\n";
        cout << "Produto Codigo: " << produto[i].codigo << endl;
        cout << "Produto Nome: " << produto[i].nome << endl;
        cout << "Qtd Estoque: " << produto[i].qtdEstoque << endl;
        cout << "Produto Preco: " << produto[i].preco << endl;
        cout << "\n--------------------\n";
    }
}

int main(){
    int N;
    PRODUTOS produto[100];
    
    inserirProduto(produto, &N);
    adicionarQuantidade(produto, N);
    imprimeProdutos(produto, N);
}
