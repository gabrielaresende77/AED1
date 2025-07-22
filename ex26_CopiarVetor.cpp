/* Crie um aplicativo que declare 2 vetores de 10 valores, inicialize-os e
copie os valores de um para outro. */

#include <iostream>
using namespace std;

int main()
{
    int A[10], B[10];

    // Leitura do vetor A
    for(int i = 0; i < 10; i++) {
        cout << "A[" << (i+1) << "] : ";
        cin >> A[i];
    }

    cout << endl;

    // Cópia do vetor A para o vetor B
    for(int i = 0; i < 10; i++) {
        B[i] = A[i];
        cout << "B[" << (i+1) << "] : " << B[i] << endl;
    }

    return 0;
}
