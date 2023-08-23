#include <iostream>
#include <ctype.h>
#include <iomanip>

using namespace std;

int main(){
    
    float op1, op2, valorFinal;
    char sinal, opcao;
    
    do{
        
        cin >> op1;
        cin >> sinal;
        cin >> op2;
        
        switch(sinal){
                case '+':
                    valorFinal = op1 + op2;
                    break;
                case '-':
                    valorFinal = op1 - op2;
                    break;
                case '*':
                    valorFinal = op1 * op2;
                    break;
                case '/':
                    if(op2 == 0){
                        cout << "Erro: Divisao por zero ";
                        break;
                    }
                    else{
                        valorFinal = op1 / op2;
                        break;
                    }
                    
                default:
                    cout << "Digite uma operacao '+ - * /' ";
                    break;
        }
        if (op2 != 0){
            cout << fixed << setprecision(2);
            cout << op1 << ' ' << sinal << ' ' << op2 << " = " << valorFinal;
        }
        
        cout << "\n\nDeseja fazer uma nova operacao? S - sim / N - nao ";
        cin >> opcao;
    }while(toupper(opcao) != 'N');
    
    return 0;
}
