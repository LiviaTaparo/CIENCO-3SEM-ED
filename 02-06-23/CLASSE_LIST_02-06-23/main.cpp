#include <iostream>
#include <list>
#include <iterator>

using namespace std;

void imprimirLista(const list<int>& lista)
{
    list<int>::const_iterator elemento; // [classe]::[método]
    if(lista.empty())
    {
        cout << "Lista vazia\n";
    }
    else
    {
        elemento = lista.begin(); //aponta para o primeiro elemento
        do
        {
            cout << *elemento << " ";
            elemento++;
        }
        while (elemento != lista.end());
        cout << endl;
    }

}
int main()
{
    list<int> lista;
    lista.push_back(1);
    lista.push_back(5);
    lista.push_front(3);
    lista.push_front(2);
    imprimirLista(lista);

    cout << "A lista tem " << lista.size() << " elementos" << endl << endl;

    lista.sort(); //ordena a lista
    imprimirLista(lista);
    lista.remove(5); //Remove todas as ocorrencias de 5 na lista. -> [1,2,3]
    imprimirLista(lista);
    lista.reverse(); //Inverte a ordem dos elemento -> [3,2,1]
    imprimirLista(lista);
    lista.push_back(2); //[3,1,2,2]
    imprimirLista(lista);
    lista.push_front(2); //[2,2,3,1,2]
    imprimirLista(lista);
    lista.sort();
    imprimirLista(lista); //[1,2,2,2,3]
}
