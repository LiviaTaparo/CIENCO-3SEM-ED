#include <iostream>

using namespace std;

struct DATA
{
    int dia;
    int mes;
    int ano;
};
int main()
{
     DATA hoje;
     hoje.dia = 24;
     hoje.mes = 03;
     hoje.ano = 2023;

     cout << "Hoje eh "
     << hoje.dia << "/"
     << hoje.mes << "/"
     << hoje.ano << endl;
}
