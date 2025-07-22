/* Crie um aplicativo que leia os valores de dois vetores inteiros, some e insira
seus valores num outro vetor. */

#include <iostream>
using namespace std;

int main()
{
	int A[10], B[10], C[10];
	int aux;
	
	// leitura do vetor A
	for(int i=0; i<10; i++) {
		cout << "A[" << (i+1) << "]= ";
		cin >> A[i];
	}
	
	// leitura do vetor B
	for(int i=0; i<10; i++) {
		cout << "B[" << (i+1) << "]= ";
		cin >> B[i];
	}
	cout << "$$$$$$$$$$$$$$$$$$$\n";
	for(int i=0; i<10; i++) {
		C[i] = A[i] + B[i];
		cout << "C[" << (i+1) << "]= " << C[i] << endl;
	}
	
	return 0;
}