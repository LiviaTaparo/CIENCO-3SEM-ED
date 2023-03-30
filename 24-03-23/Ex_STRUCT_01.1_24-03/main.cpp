#include <iostream>
#include <string>

using namespace std;

struct PESSOA
{
    string nome;
    int idade;
};

int main()
{
    PESSOA p;

    cout << "Qual seu nome: " << endl;
    getline(cin, p.nome); //getline lê os caracteres necessarios

    cout << "Quantos anos voce tem: ";
    cin >> p.idade;

    cout << "Idade: " << p.idade << " anos" << endl;
    cout << "Nome: " << p.nome << endl;
}
