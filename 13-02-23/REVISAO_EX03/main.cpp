/*Faça um programa em C++ que receba o número de horas trabalhadas e o
valor do salário mínimo. Calcule e mostre o salário a receber seguindo as
regras abaixo:
a. A hora trabalhada vale a metade do salário mínimo;
b. O salário bruto equivale ao número de horas trabalhadas multiplicado
pelo valor da hora trabalhada
c. O imposto equivale a 3% do salário bruto;
d. O salário a receber equivale ao salário bruto menos o imposto.*/
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
