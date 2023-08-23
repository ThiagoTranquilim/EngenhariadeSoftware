#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int N, X, fat = 1;
	float s;
	bool a = true;
	
	do{
		cin >> N;
		
		if((N <= 0) || (N >= 50)){
			cout << "Digite um valor entre 1 e 50";
		}
	}while((N <= 0) || (N >= 50));
	
	cout << "Digite o valor de X: ";
	cin >> X;
	
	s = X;
	
	for(int i = 3; i <= N; i += 2){
		
		fat = fat * (i + 1);
		if(a){
			s -= pow(X, i)/fat;
			a = false;
		}else {
			s += pow(X, i)/fat;
			a = true;
		}
		cout << "i: " << i << " fat: " << fat << " p: " << pow(X, i) << endl;
	}
}
