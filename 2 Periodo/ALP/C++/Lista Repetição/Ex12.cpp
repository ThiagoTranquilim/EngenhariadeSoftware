#include <iostream>

using namespace std;

/* Fa�a um programa que mostre os n�meros entre 1000 e 2000 que, quando
divididos por 11 produzam resto igual a 5. */

int main(){
	
	for(int i = 1000; i <= 2000; i++){
		if(i % 11 == 5){
			cout << i << endl;
		}
	}
}
