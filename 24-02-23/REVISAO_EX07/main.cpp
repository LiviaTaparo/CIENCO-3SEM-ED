/*7. Escreva um programa em C++ que escreva todos os números múltiplos de 5,
no intervalo de 1 a 500.*/
#include <iostream>

using namespace std;

int main()
{
    int num, multiplo;
    multiplo = 0;
    num = 1;

    cout << "Os multiplos sao: " <<endl;

    while(multiplo < 500)
    {
        multiplo = num * 5;

        cout << multiplo << endl;
        num++;
    }


}
