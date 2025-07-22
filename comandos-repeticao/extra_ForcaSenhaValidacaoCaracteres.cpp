/*
Crie um programa em C++ que solicite ao usu�rio que insira uma senha e, em seguida, avalie a for�a dessa senha com base nos seguintes crit�rios:

1. Comprimento M�nimo: A senha deve ter pelo menos 8 caracteres.
2. Mistura de Caracteres: A senha deve conter pelo menos uma letra mai�scula, uma letra min�scula e um d�gito.
3. Caracteres Especiais : Se a senha contiver pelo menos um caractere especial (por exemplo: !@#$%^&*()-_+=[]{}|\;:'",.<>/?), ela ganha um ponto extra de for�a.

Seu programa deve imprimir uma mensagem indicando a for�a da senha:
- Muito Fraca: Se atender apenas ao crit�rio de comprimento m�nimo (ou nenhum).
- Fraca: Se atender ao crit�rio de comprimento m�nimo e a um ou dois dos crit�rios de mistura (mai�scula, min�scula, d�gito).
- Moderada: Se atender ao crit�rio de comprimento m�nimo e a todos os tr�s crit�rios de mistura.
- Forte: Se atender ao crit�rio de comprimento m�nimo, a todos os tr�s crit�rios de mistura e ao crit�rio de caracteres especiais.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string senha;
    cout << "Digite a senha: ";
    getline(cin, senha);

    int tamanho = 0;
    while (true) {
        if (senha[tamanho] == '\0') break;
        tamanho++;
    }

    if (tamanho < 8) {
        cout << "Senha Muito Fraca" << endl;
        return 0;
    }

    int maiuscula = 0, minuscula = 0, digito = 0, especial = 0;

    char especiais[] = {'!', '@', '#', '$', '%', '^', '&', '*', '(', ')', '-', '_', '+', '=',
                        '[', ']', '{', '}', '|', '\\', ';', ':', '\'', '"', ',', '.', '<', '>', '/', '?'};

    int i = 0;
    while (i < tamanho) {
        char c = senha[i];

        if (c >= 'A' && c <= 'Z')
            maiuscula = 1;
        else if (c >= 'a' && c <= 'z')
            minuscula = 1;
        else if (c >= '0' && c <= '9')
            digito = 1;
        else {
            int j = 0;
            while (j < 32) {
                if (c == especiais[j]) {
                    especial = 1;
                    break;
                }
                j++;
            }
        }
        i++;
    }

    int mistura = maiuscula + minuscula + digito;

    if (mistura <= 1)
        cout << "Senha Muito Fraca" << endl;
    else if (mistura == 2)
        cout << "Senha Fraca" << endl;
    else if (mistura == 3 && especial == 0)
        cout << "Senha Moderada" << endl;
    else if (mistura == 3 && especial == 1)
        cout << "Senha Forte" << endl;

    return 0;
}