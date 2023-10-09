#include <iostream>
#include <cstdlib>

using namespace std;



int main(){
	int N;
	float *pmaior, *pmenor;
	
	cout << "Digite o tamanho do vetor: ";
	cin >> N;
	float *vet = (float*)calloc(N, sizeof(float));
	
	pmaior = &vet[0];
	pmenor = &vet[0];
	for(int i = 0; i < N; i++){
		cout << "[ " << i << " ] = ";
		cin >> vet[i];
		
		if(vet[i] > *pmaior){
			pmaior = &vet[i];
		}
		
		if(vet[i] < *pmenor){
			pmenor = &vet[i];
		}
	}
	
	for(int i = 0; i < N; i++){
		cout << vet[i] << " ";
	}
	cout << endl;
	cout << "pmaior: " << *pmaior << endl;
	cout << "pmenor: " << *pmenor << endl;
	free(vet);
	return 0;
}
