#include <iostream>

using namespace std;

int main()
{
    float vetorTemperatura[3];
    float tempFinal = 0;
    float mediaTemp = 0;
    float abaixoTemp = 0;
    float menorTemperatura = 90;
    float maiorTemperatura = -90;

    for(int i = 0; i < 3; i++)
    {
        cout << "Qual foi a temperatura de cada dia: ";
        cin >> vetorTemperatura[i];
        tempFinal = tempFinal + vetorTemperatura[i];

        if(vetorTemperatura[i] < menorTemperatura)
        {
            menorTemperatura = vetorTemperatura[i];
        }
        if(vetorTemperatura[i] > maiorTemperatura)
        {
            maiorTemperatura = vetorTemperatura[i];
        }
    }
     mediaTemp = tempFinal / 3;

     cout << "A Temperatura media do ano foi: " << mediaTemp << endl;


     for(int i  = 0; i < 3; i++)
     {
         if(vetorTemperatura[i] < mediaTemp)
         {
             abaixoTemp++;
         }
     }

    cout << "A menor temperatura foi: " << menorTemperatura << endl;
    cout << "A maior temperatura foi: " << maiorTemperatura << endl;
    cout << " " << abaixoTemp << " Dias abaixo da media de temperatura.";

}
