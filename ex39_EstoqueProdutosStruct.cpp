/*
1. Cadastro de Produtos:
- Crie uma struct chamada Produto: Essa struct deve conter informações como nome(string),
preço(float) e quantidade (inteiro).
- Crie um vetor de Produto: Este vetor deve armazenar até 10 produtos.
- Implemente funcionalidades para:
   - Cadastrar novos produtos (recebendo informações do usuário e adicionando ao vetor).
   - Listar todos os produtos cadastrados.
   - Buscar um produto pelo nome e exibir suas informações.
   - Calcular o valor total do estoque (soma do preço de cada produto multiplicado pela quanti-
   dade). 
*/

#include <iostream>
#include <locale.h>
using namespace std;

struct TProduto {
    string nome;
    float preco;
    int quantidade;
};

int main() {
    setlocale(LC_ALL, "Portuguese");

    TProduto prods[10];
    int op = 0, cont = 0;
    string nome;
    bool achou = false;
    float soma = 0;

    do {
        cout << "\nGestão de Produtos Tabajara\n";
        cout << "1 - Cadastrar novo produto\n";
        cout << "2 - Listar todos os produtos\n";
        cout << "3 - Buscar um produto pelo nome\n";
        cout << "4 - Calcular valor total do estoque\n";
        cout << "0 - Sair\n";
        cout << "Informe a opção desejada: ";
        cin >> op;

        while (op < 0 || op > 4) {
            cout << "Opção inválida. Digite novamente: ";
            cin >> op;
        }

        switch (op) {
        case 1:
            if (cont < 10) {
                cout << "\nCadastro de Produto\n";
                cout << "Nome: ";
                cin >> prods[cont].nome;
                cout << "Preço: ";
                cin >> prods[cont].preco;
                cout << "Quantidade: ";
                cin >> prods[cont].quantidade;
                cont++;
            } else {
                cout << "Limite de produtos atingido (10 produtos).\n";
            }
            break;

        case 2:
            cout << "\nListagem de Produtos\n";
            for (int i = 0; i < cont; i++) {
                cout << "Produto " << i + 1 << ":\n";
                cout << "Nome: " << prods[i].nome << endl;
                cout << "Preço: R$" << prods[i].preco << endl;
                cout << "Quantidade: " << prods[i].quantidade << endl;
                cout << "-------------------------\n";
            }
            break;

        case 3:
            cout << "\nBuscar Produto\n";
            cout << "Informe o nome: ";
            cin >> nome;
            achou = false;

            for (int i = 0; i < cont; i++) {
                if (prods[i].nome == nome) {
                    cout << "Nome: " << prods[i].nome << endl;
                    cout << "Preço: R$" << prods[i].preco << endl;
                    cout << "Quantidade: " << prods[i].quantidade << endl;
                    achou = true;
                    break; // se encontrou, pode sair do laço
                }
            }

            if (!achou)
                cout << "Este produto não foi cadastrado.\n";
            break;

        case 4:
            soma = 0;
            for (int i = 0; i < cont; i++) {
                soma += prods[i].preco * prods[i].quantidade;
            }
            cout << "Valor total em estoque: R$" << soma << endl;
            break;

        case 0:
            cout << "Programa encerrado. Até a próxima!\n";
            break;
        }
    } while (op != 0);

    return 0;
}