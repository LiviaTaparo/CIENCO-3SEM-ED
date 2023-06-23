#include <iostream>
#include <queue>
#include <string>

using namespace std;

typedef struct CONTA
{
    string cliente;
    double saldo;
};

int main(int argc, char** argv)
{
      queue <CONTA> filaEspera;
    int opcao = 0;
    int operacao = 0;
    int deposito = 0;
    int saque = 0;

    CONTA novaConta;

    while(opcao != 3)
    {
        cout << "Bem-Vindo ao Banco\n";
        cout << "Escolha uma opção: \n";
        cout << "1- Abrir uma nova conta;" << endl;
        cout << "2- Atender o proximo cliente na fila;" << endl;
        cout << "3- Encerrar;" << endl;
        cin >> opcao;


        switch(opcao)
        {
        case 1:
        {
            cout << "NOME: ";
            cin >> novaConta.cliente;


            cout << "SALDO INICIAL: ";
            cin >> novaConta.saldo;

            filaEspera.push(novaConta);
        }
        break;

        case 2:
        {
            CONTA novaConta2 = filaEspera.front();
            filaEspera.pop();
            cout << "Atendendo cliente; " << endl;
            cout << novaConta2.cliente << endl;

            cout << "Saldo: R$";
            cout << novaConta2.saldo << endl;

            cout << "Qual operacao deseja realizar?: " << endl;
            cout << "1- DEPOSITO;" << endl;
            cout << "2- SAQUE;" << endl;
            cout << "3- MOSTRAR SALDO;" << endl;
            cin >> operacao;

            switch(operacao)
            {
            case 1:
            {
                cout << "Qual o valor do deposito?:" << endl;
                cin >> deposito;
                deposito = novaConta2.saldo + deposito;

                cout << "Saldo atual de: R$" << deposito << endl;
            }
            break;
            case 2:
            {
                cout << "Deseja qual valor deseja sacar: R$";
                cin >> saque;

                saque = novaConta2.saldo - saque;

                cout << "Salto atual de: R$" << saque << endl;
            }
            break;
            case 3:
            {
                cout << "Saldo atual de: R$" << novaConta.saldo << endl;
            }
            break;
            }
        }
        break;
        case 3:
        {
            cout << "Obrigado e volte sempre!!" << endl;
        }
        break;
        }
    }
}
