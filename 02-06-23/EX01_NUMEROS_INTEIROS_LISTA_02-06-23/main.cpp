#include <iostream>
#include <list>
#include <iterator>

using namespace std;

int main()
{
    list<int> minhaLista;
    int numero;

    for(int i = 1; i <= 5; i++)
    {
        cout << "Informe 5 numeros inteiros: " << endl;
        cin >> numero;

        minhaLista.push_back(numero);
    }

    for(list<int>::iterator it = minhaLista.begin(); it != minhaLista.end(); ++it)
    {
        cout << *it << "  -  ";
    }
    cout << endl;

    minhaLista.reverse();

        for(list<int>::iterator it = minhaLista.begin(); it != minhaLista.end(); ++it)
    {
        cout << *it << "  -  ";
    }


    cout << endl;
}
