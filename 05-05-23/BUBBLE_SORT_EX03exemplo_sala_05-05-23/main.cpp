#include <iostream>

using namespace std;

void imprimeVetor(int x[])
{
    for(int i = 4; i >= 0; i--)
    {
        cout << " numero: " << x[i] << endl;
    }
}

void bubbleSort2(int x[])
{
        int num = 0;


    do
    {
    for (int j = 1; j <= 4; j++)
    {
        int aux = 0;

        for (int i = 4; i >= j; i--)
        {
            if (x[i] < x[i - 1])
            {
                aux = x[i];
                x[i] = x[i - 1];
                x[i - 1] = aux;
                num = 1;
            }
            if (x[i] > x[i - 1])
            {
                num = 0;
            }
        }

        }

    }while(num == 1);

}


int main()
{
    int x[5];

    for (int i = 0; i <= 4; i++)
    {
        cout << "digite um numero " << endl;
        cin >> x[i];

    }

    bubbleSort2(x);
    imprimeVetor(x);

}
