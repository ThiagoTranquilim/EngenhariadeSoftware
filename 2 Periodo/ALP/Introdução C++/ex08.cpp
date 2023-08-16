#include <iostream>

using namespace std;

int main()
{
    float C, F;
    cout << "Digite a temperatura em Fahrenheit: ";
    cin >> F;
    C = (5* (F - 32)/ 9);
    cout << "A temperatura em Celsius e: " << C;
}


