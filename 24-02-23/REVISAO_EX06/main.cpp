/*6. Escreva um programa em C++ que mostre o quadrado dos números inteiros
no intervalo de 1 a 20.
*/
#include <iostream>

using namespace std;

int main()
{
    int quadrado;

     cout << "Os numeros sao: " << endl;

    for(int i = 1; i <= 20; i++)
    {
        quadrado = i * i;

      cout << quadrado << endl;
    }


}
