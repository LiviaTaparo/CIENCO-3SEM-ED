#include <iostream>

using namespace std;

void troca(int & px, int & py)//o & mostra onde esta o numero
{
    int temp;


    temp = px;
    px = py;
    py = temp;
}
int main()
{

    int n1, n2;

    cout << "Entre com o numero 1: ";
    cin >> n1;
    cout << "Entre com o numero 2: ";
    cin >> n2;


    cout << "Voce entrou com " << n1 << " e " << n2 << endl;
    troca(n1,n2);

    cout << "Trocados, eles sao " << n1 << " e " << n2 <<endl;
}

