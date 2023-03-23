/*Escreva um programa em C++ que permita a leitura dos nomes de 10
pessoas e armaze os nomes lidos em um vetor. Após isto, o algoritmo
deve permitir a leitura de mais 1 nome qualquer de pessoa e depois
escrever a mensagem ACHEI, se o nome estiver entre os 10 nomes lidos
anteriormente (guardados no vetor), ou NÃO ACHEI caso contrário.
*/
#include <iostream>
#include <string>

using namespace std;

#define NOME 10

int main()
{
     int contador =0;
     string nome[NOME], n;
     for (int i = 0; i < NOME; i++)
    {
        cout << "Digite  nome " << i << ": ";
        cin >> nome[i];
    }

      cout << "Digite o nome desejado" << endl;
      cin >> n;

    for (int i = 0; i < NOME; i++)
    {
        if(n == nome[i])
    {
        contador++;

    }

    }
    if(contador == 1)
    {
        cout << "Achei!";

    }
    else
    {
        cout << "N achei!";
    }





}
