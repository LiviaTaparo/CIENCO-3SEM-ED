#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack <int> num;
    int e = 0, aux = 0, b, p=0;

    cout << "Digite uma sequencia de numeros inteiros positivos (digite 0 p/ finalizar): \n";
    do
    {
        cout << "";
        cin >> e;
        if(e!= 0)
        {
            num.push(e);
        }

    }
    while(e!=0);

    cout << "Numeros da fila: ";
    do
    {
        cout << num.top() << " ";
        num.pop();

    }
    while(!num.empty());



}
