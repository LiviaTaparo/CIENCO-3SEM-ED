/*Construa um programa em C++ que calcule o novo salário de um funcionário.
Considere que o funcionário deverá receber um reajuste de 15% caso seu
salário seja menor que 1000. Se o salário for maior ou igual a 1000, mas
menor ou igual a 1500, o reajuste deve ser de 10%. Caso o salário seja maior
que 1500, o reajuste deve ser de 5%.
*/
#include <iostream>

using namespace std;

int main()
{
    float salario, salarioTotalUm, salarioTotalDois, salarioTotalTres;


    cout << "Digite Salario: ";
    cin >> salario;

    if(salario < 1000)
    {
        salarioTotalUm = salario + (salario * 0.15);

        cout << "Salario Total 15%: " << salarioTotalUm;
    }
    else if(salario >=1000 && salario <=1500)
    {
         salarioTotalDois = salario + (salario * 0.10);

        cout << "Salario Total 10%: " << salarioTotalDois;
    }

    else
    {
        salarioTotalTres= salario +(salario * 0.05) ;

        cout << "Salario Total 05%: " << salarioTotalTres;
    }
}
