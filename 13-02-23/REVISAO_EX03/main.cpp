/*Fa�a um programa em C++ que receba o n�mero de horas trabalhadas e o
valor do sal�rio m�nimo. Calcule e mostre o sal�rio a receber seguindo as
regras abaixo:
a. A hora trabalhada vale a metade do sal�rio m�nimo;
b. O sal�rio bruto equivale ao n�mero de horas trabalhadas multiplicado
pelo valor da hora trabalhada
c. O imposto equivale a 3% do sal�rio bruto;
d. O sal�rio a receber equivale ao sal�rio bruto menos o imposto.*/
#include <iostream>

using namespace std;

int main()
{
   float salarioMinimo,  valorHoras, horas, salarioBruto, imposto, salarioTotal;

   cout << "Horas trabalhadas: ";
   cin >> horas;
   cout << "Salario minimo: ";
   cin >> salarioMinimo;

   valorHoras = salarioMinimo / 2;
   salarioBruto = horas * valorHoras;
   imposto = 0.03 * salarioBruto;
   salarioTotal = salarioBruto - imposto;


   cout << "Salario Total: " << salarioTotal;
}
