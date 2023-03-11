#include <iostream>

using namespace std;

int main()
{
    int n1, n2, temp;

    cout << "Entre com o numero 1: ";
    cin >> n1;
    cout << "Entre com o numero 2: ";
    cin >> n2;

    cout << "Voce entrou com " << n1 << " e " << n2 << endl;

    temp = n1;
    n1 = n2;
    n2 = temp;
    cout << "Trocados, eles sao " << n1 << " e " << n2 <<endl;
}
