#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack <int> elemento;
    int o=0, e=0;

    do
    {
        cout << "\nDigite uma opção: \n1. Inserir elemento\n2.Remover elemento do topo\n3.Verirficar elemento do topo\n4.Veririficar se a pilha está vazia\n5.Exibir tamanho da pilha\n0.Sair\nOpção: \n";
        cin >> o;

        switch(o)
        {
        case 1:
            cout << "Digite um elemento: \n";
            cin >> e;
            elemento.push(e);
            break;
        case 2:
            cout << "Elemento " << e << " retirado\n";
            elemento.pop();
            break;
        case 3:
             cout << "Elemento no Topo: " << elemento.top();
            break;
        case 4:
             if(elemento.empty())
        {
        cout << "Pilha vazia" << endl;
        }
            else(!elemento.empty());
        {
         cout << "Elemento no Topo: " << elemento.top() << endl;
         elemento.pop();
        }
        break;
        case 5:
            cout << "Tamanho da Pilha: " << elemento.size() << endl;

        default:
            cout << "Invalido";
            break;
        }

    }
    while(o != 0);
}
