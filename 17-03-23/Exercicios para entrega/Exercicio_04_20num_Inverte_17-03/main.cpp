#include <iostream>

using namespace std;

int main()
{
     int num[20];


    for(int i = 0; i < 20; i++)
    {
        cout << "Digite um numero: ";
        cin >> num[i];
    }

    for(int i = 1; i >= 0; i--)
    {
     cout << num[i];
    }
    return 0;

}
