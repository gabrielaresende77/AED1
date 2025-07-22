/*
Crie um programa em C++ que solicite ao usuário que insira uma senha e, em seguida, avalie a força dessa senha com base nos seguintes critérios:

1. Comprimento Mínimo: A senha deve ter pelo menos 8 caracteres.
2. Mistura de Caracteres: A senha deve conter pelo menos uma letra maiúscula, uma letra minúscula e um dígito.
3. Caracteres Especiais : Se a senha contiver pelo menos um caractere especial (por exemplo: !@#$%^&*()-_+=[]{}|\;:'",.<>/?), ela ganha um ponto extra de força.

Seu programa deve imprimir uma mensagem indicando a força da senha:
- Muito Fraca: Se atender apenas ao critério de comprimento mínimo (ou nenhum).
- Fraca: Se atender ao critério de comprimento mínimo e a um ou dois dos critérios de mistura (maiúscula, minúscula, dígito).
- Moderada: Se atender ao critério de comprimento mínimo e a todos os três critérios de mistura.
- Forte: Se atender ao critério de comprimento mínimo, a todos os três critérios de mistura e ao critério de caracteres especiais.
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