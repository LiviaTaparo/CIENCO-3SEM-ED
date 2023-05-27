#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue <string> atendimento;
    queue <string> aux;

    int a = 0;
    string p;

    do
    {
        cout << "\nEscolha um numero:\n1.Inserir Cliente na Fila\n2.Atender Proximo Cliente\n3.Exibir Fila de Espera\n0.Encerrrar Programa\nEscolha um numero: \n";
        cin >> a;

        switch(a)
        {
        case 1:
            cout << "Digite o nome do cliente: \n";
            cin >> p;
            atendimento.push(p);
            break;
        case 2:
            cout << "Cliente " << atendimento.front() << " vai ser atendido agora\n";
            atendimento.pop();
            break;
        case 3:
            cout << "Fila de espera: \n" << atendimento.size();
            if(!atendimento.empty())
            {
                aux = atendimento;
            }
            while(!aux.empty())
            {
                cout << aux.front() << endl;
                aux.pop();
            }
            break;
        default:
            cout << "Invalido";
            break;


        }
    }
    while(a != 0);
}
