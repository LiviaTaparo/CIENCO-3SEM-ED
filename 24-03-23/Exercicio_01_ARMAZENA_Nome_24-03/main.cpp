#include <iostream>
#define ARMAZENA 5

using namespace std;

struct Cadastro
{
    string nome;
    string endereco;
    int cpf;
    int idade;
};

int main()
{
    Cadastro pessoa[ARMAZENA];

    for(int i = 0; i < ARMAZENA; i++)
    {
        cout << "Digite nome: ";
        getline(cin, pessoa[i].nome);

        cout << "Digite endereco: ";
        getline(cin, pessoa[i].endereco);

        cout << "Digite CPF: ";
        cin >> pessoa[i].cpf;

        cout << "Digite idade: ";
        cin >> pessoa[i].idade;

        cout << "-----------------------" << endl;

        cin.ignore();
    }

    for(int i = 0; i < ARMAZENA; i ++)
    {
        cout << "Registro " << i << endl
        << "Nome: " << pessoa[i].nome << endl
        << "CPF: " << pessoa[i].cpf << endl
        << "Endereco: " << pessoa[i].endereco << endl
        << "Indade: " << pessoa[i].idade << endl
        << "------------------------------" <<endl;
    }
}
