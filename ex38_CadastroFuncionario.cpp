/* Faça um programa que armazene em um registro de dados (estrutura composta)
os dados de um funcionário de uma empresa, compostos de: Nome, Idade, Sexo (M/F), 
CPF, Data de Nascimento, Código do Setor onde trabalha (0-99), Cargo que ocupa e
Salário. Os dados devem ser digitados pelo usuário, armazenados na estrutura e 
exibidos na tela. */

#include <iostream>
#include <locale.h>
using namespace std;

struct TData{
	int dia, mes, ano;
};

struct TFuncionario{
	string nome, cpf, cargo;
	TData dataNasc;
	int idade, setor;
	char sexo;
	float salario;
};

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	TFuncionario funcs[20];
	int cont=0;
	char resp='s';
	do{
		cout << "Nome "; cin >> funcs[cont].nome;
		cout << "CPF "; cin >> funcs[cont].cpf;
		cout << "Cargo "; cin >> funcs[cont].cargo;
		cout << "Data de nascimento (dd mm aa): "; cin >> funcs[cont].dataNasc.dia
		>> funcs[cont].dataNasc.mes >> funcs[cont].dataNasc.ano;
		cout << "Idade: "; cin >> funcs[cont].idade;
		do{
			cout << "Código do Setor: "; cin >> funcs[cont].setor;
		}while(funcs[cont].setor > 99 || funcs[cont].setor < 0);
		cout << "Sexo(F/M): "; cin >> funcs[cont].sexo;
		cout << "Salário: R$"; cin >> funcs[cont].salario;
		if(cont < 19){
			cout << "Deseja continuar a leitura?(s/n)"; cin >> resp;
		}
		else
			resp='n';
		cont++;
	}while(resp=='s');
	cout << "----- Listagem de Funcionários Tabajara -----\n";
	for(int i=0; i<cont; i++) {
		cout << "Nome " << funcs[i].nome << endl;
		cout << "CPF " << funcs[i].cpf << endl;
		cout << "Cargo " << funcs[i].cargo << endl;
		cout << "Data de nascimento (dd mm aa): " << funcs[i].dataNasc.dia << "/"
		<< funcs[i].dataNasc.mes << "/" << funcs[i].dataNasc.ano << endl;
		cout << "Idade: " << funcs[i].idade << endl;
		cout << "Código do Setor: " << funcs[i].setor << endl;
		cout << "Sexo(F/M): " << funcs[i].sexo << endl;
		cout << "Salário: R$" << funcs[i].salario << endl;
		cout << "----------\n";
	}
	
	return 0;
}