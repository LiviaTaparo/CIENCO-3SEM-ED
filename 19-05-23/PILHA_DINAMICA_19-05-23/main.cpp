#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack <string> roupas;

    //empty retorna se pilha cheia ou vazia
    if(roupas.empty())
    {
        cout << "Pilha vazia" << endl;
    }
     roupas.push("Calca azul"); //push adiciona elementos na pilha
     roupas.push("Calca preta");
     roupas.push("Camiseta branca");
     roupas.push("Camiseta amarela");
     roupas.push("Calca branca");
     roupas.push("bermuda preta");

     //size mostra o tamanho da pilha
     cout << "Tamanho da Pilha: " << roupas.size() << endl;

     while(!roupas.empty())
     {
         cout << "Peça de Roupa no Topo: " << roupas.top() << endl;
         roupas.pop(); //retira elementos da pilha
     }

     cout << endl;
     cout << "Tamanho da Pilha: " << roupas.size() << endl;
}
