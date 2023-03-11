#include <iostream>

using namespace std;

void mensagem(int n)
{
    cout << "numero: " << n << endl;
}

void mensagem()
{
     cout << "Exemplo de Sobrecarga de Funcao" << endl;
}

int main()
{
    mensagem();
    mensagem(10);

    return 0;
}
