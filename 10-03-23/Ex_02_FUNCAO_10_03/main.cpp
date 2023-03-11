#include <iostream>

using namespace std;

bool par(int num);
void mensagem();

int main()
{
    int n = 0;

    mensagem();

    cout << "Digite um numero: ";
    cin >> n;

    if(par(n))
    {
        cout << "O numero " << n << " eh par" << endl;
    }
    else
    {
        cout << "O numero " << n << " eh impar" << endl;
    }
    return 0;
}
bool par(int num)
    {
        if (num % 2 ==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
void mensagem()
{
    cout << "Aula do Modulo 2" << endl;
    cout << endl;
}
