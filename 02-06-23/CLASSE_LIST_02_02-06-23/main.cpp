#include <iostream>
#include <list>
#include <iterator>

using namespace std;

int main()
{
    list<int> minhaLista; //Cria lista vazia de inteiros
    //Inserção de elementos na lista

    minhaLista.push_back(10); //Insere um elemento no final da lista
    minhaLista.push_front(20); //Insere no incio da lista
    minhaLista.insert(next(minhaLista.begin()), 30); //Insere apos o primeiro da lista

    //Acesso aos elementos da lista utilizando o iterador
    cout << "Elementos da lista: ";
    for(list<int>::iterator it = minhaLista.begin(); it != minhaLista.end(); ++it)
    {
        cout << *it << " "; //Imprime cada elemento da lista
    }
    cout << endl;

    //remoção de elementos da lista utilizando o interador
    list<int>::iterator it = minhaLista.begin();
    advance(it, 1); //Avança o interador para o segundo da lista
    minhaLista.erase(it); //remove o segundo elemento da lista

    //Verificacao do tamanho
    cout << "Tamanho da lista: " <<minhaLista.size() << endl;

    //Verifica se está vazia
    cout << "Lista Vazia? " << (minhaLista.empty() ? "Sim" : "Nao") << endl;

    //Acesso ao primeiro e ultimo da lista
    cout << "Primeiro elemento: " << minhaLista.front() << endl;
    cout << "Ultimo elemento: " << minhaLista.back() << endl;

    //Limpeza da lista
    minhaLista.clear();

    //Verificação do tamanho da lista depois da limpeza
    cout << "Tamanho da lista apos a limpeza: " << minhaLista.size() << endl;


}
