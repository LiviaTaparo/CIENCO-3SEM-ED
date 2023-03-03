/*Construa um programa em C++ que calcule e apresente quanto deve ser
pago por um produto considerando a leitura do preço de etiqueta (PE) e o
código da condição de pagamento (CP). Utilize para os cálculos a tabela de
condições de pagamento a seguir:

*/
#include <iostream>

using namespace std;

int main()
{
    float pe, cp;
    char op;

    cout << "Digite o valor da etiqueta: ";
    cin >> cp;

    cout << "Digite o numero da Forma de pagamento: ";
    cin >> op;

    switch(op)
    {
    case '1':
        pe = cp - (cp * 0.1);
        cout << "A vista em dinheiro ou cheque 10% de desconto: " << pe;
        break;

    case'2':
        pe = cp - (cp * 0.05);
        cout << "A vista no credito com 5% de desconto: " << pe;
        break;

    case'3':
        pe = cp / 2;
        cout << "Duas vezes sem juros de: " << pe;
        break;
    case'4':
        pe = (cp + (cp * 0.1)) / 3;
        cout << "Em tres vezes de com juros de 10%: " << pe;
        break;

    default:
        cout << "Forma de Pagamento invalida.";
        break;

    }
    return 0;
}
