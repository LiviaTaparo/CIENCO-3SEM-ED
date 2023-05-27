#include <iostream>
#include <queue>

using namespace std;

int main()
{
    /*
    empty = vazio
    size = tamanho
    front = primeiro da fila
    back = ultimo da fila
    push = adiciona na fila
    pop = tira da fila
    */

    queue <string> pessoas;

    pessoas.push("Rodrigo");//push adiciona
    pessoas.push("jose");
    pessoas.push("leo");
    pessoas.push("livia");
    pessoas.push("augusto");
    pessoas.push("catarina");

    //size mostra o tamanho da fila

    cout << "Tamanho da Fila: " << pessoas.size() << endl;
    cout << "Primeira pessoa " << pessoas.front() << endl;
    cout << "Ultima pessoa " << pessoas.back() << endl << endl;

    while(!pessoas.empty())
    {
        cout << "Primeira pessoa " << pessoas.front() << endl;
        pessoas.pop(); //pop retira elementos da fila
    }
}
