#include <iostream>
#include <math.h>

using namespace std;

/* Dada a equa��o do segundo grau: ax2 + bx + c. Elabore um programa
que calcule as ra�zes desta equa��o */

int main(){
	float a, b, c;
	float delta, x1, x2;
	
	cin >> a;
	cin >> b;
	cin >> c;
	
	delta = (b * b) - (4 * a * c);
	
	if(delta >= 0){
		x1 = (-b + sqrt(delta))/(2 * a);
		x2 = (-b - sqrt(delta))/(2 * a);
		
		cout << x1 << endl;
		cout << x2 << endl;
	}else
		cout << "Delta < 0";
	
	return 0;
}
