/*Ler um vetor A de 10 n�meros. Ap�s, ler mais um n�mero e guardar em
uma vari�vel X. Armazenar em um vetor M o resultado de cada
elemento de A multiplicado pelo valor X. Logo ap�s, imprimir o vetor M.
*/
#include <iostream>

#define vetorA 10


using namespace std;

int main()
{
    int vetor[vetorA], x, vetorM[vetorA];

    for (int i = 0; i < 10; i++)
    {
        cout << "Digite o numero " << i << ": ";
        cin >> vetor[i];
    }

    cout << "Digite o x:";
    cin >> x;

   for (int i = 0; i < 10; i++)
    {
         vetorM[i] = vetor[i] * x;
    }
    for(int i = 0; i < 2; i++)
    {
        cout << "O vetor M eh: " << vetorM[i] << endl;
    }
}
