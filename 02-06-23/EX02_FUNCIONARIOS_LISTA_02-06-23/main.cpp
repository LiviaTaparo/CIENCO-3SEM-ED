#include <iostream>
#include <list>
#include <iterator>
#include <string>

using namespace std;

int main()
{

    list<string>listaFuncionarios;
    list<string>listaFuncionarios02;

    string nomes;
    int funcionarios;

    cout << "Quantos funcionarios serao cadastrados: ";
    cin >> funcionarios;

    for(int i = 0; i < funcionarios; i++)
    {
        cout << "Qual o nome para cadastro?: " << endl;
        cin >> nomes;

        listaFuncionarios.push_back(nomes);
    }

    cout << endl;

    cout << "Lista vazia? " << (listaFuncionarios.empty() ? "Sim" : "Nao") << endl;


    for(list<string>::iterator it = listaFuncionarios.begin(); it != listaFuncionarios.end(); ++it)
    {
        cout << *it << endl;
    }
    cout << endl;

    listaFuncionarios02 = listaFuncionarios;

    listaFuncionarios.sort();

     for(list<string>::iterator it = listaFuncionarios.begin(); it != listaFuncionarios.end(); ++it)
    {
        cout << *it << endl;
    }

    cout << endl;

    listaFuncionarios02.reverse();

    for(list<string>::iterator it = listaFuncionarios02.begin(); it != listaFuncionarios02.end(); ++it)
    {
        cout << *it << endl;
    }
    cout << endl;

    cout << "O tamanho da lista de funcionarios e: " << listaFuncionarios02.size() << endl;

}
