#include <iostream>

using namespace std;

int main()
{

    int num;

    cout << "Digite o tamanho dos vetores";
    cin >> num;

    int vetorA[num], vetorB[num], vetorSoma[num];

    for(int i = 0; i <= num; i++)
    {

    cout << "Coloque o valor de A: ";
    cin >> vetorA[i];

    cout << "Coloque o valor de B: ";
    cin >> vetorB[i];

    vetorSoma[i] = vetorA[i] + vetorB[i];

    }

    for(int i = 0;  i < num; i++)
    {
        cout << vetorA[i] << "+" << vetorB[i] << "=" << vetorSoma[i] <<endl;
    }







}
