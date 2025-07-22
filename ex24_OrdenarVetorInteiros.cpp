/* Crie um aplicativo que leia os valores de um vetor inteiro, os copie em
ordem crescente para outro vetor e os imprima na tela. */

#include <iostream>
using namespace std;

int main()
{
	int A[10], B[10];
	int aux;
	// leitura do vetor
	for(int i=0; i<10; i++)
	{
		cout << "A[" << (i+1) << "]= ";
		cin >> A[i];
		B[i] = A[i];
	}
	// ordenação do vetor
	for(int i=0; i<10; i++)
	{
		for(int j=i+1; j<10; j++)
		{
			if(B[i] > B[j])
			{
				aux = B[i];
				B[i] = B[j];
				B[j] = aux;
			}
		}
	}
	// impressão do vetor
	cout << "==================\n";
	for(int i=0; i<10; i++)
	{
		cout << "B[" << (i+1) << "]= " << B[i] << endl;
	}
	
	return 0;
}