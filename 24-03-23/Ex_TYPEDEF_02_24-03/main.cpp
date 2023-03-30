#include <iostream>
#include <string>

using namespace std;

typedef struct DATA
{
    //para declarar numeros positivos, com 0, usa-se unsigned

    unsigned short dia;
    unsigned short mes;
    unsigned int ano;
} Data;

typedef struct ANIVERSARIO
{
    string nome;
    Data nascimento;
} Aniversario;

int main()
{
    Aniversario pessoa;
    cout << "Digite o nome da pessoa: " << endl;
    getline(cin, pessoa.nome);
    cout << "Digite o dia que a pessoa nasceu: " << endl;
    cin >> pessoa.nascimento.dia;
    cout << "Digite o mes que a pessoa nasceu: " << endl;
    cin >> pessoa.nascimento.mes;
    cout << "Digite o ano que a pessoa nasceu: " << endl;
    cin >> pessoa.nascimento.ano;

    cout << pessoa.nome << endl;
    cout << "Nascceu em: ";
    cout << pessoa.nascimento.dia << "/";
    cout << pessoa.nascimento.mes << "/";
    cout << pessoa.nascimento.ano << endl;




}
