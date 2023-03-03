/*1. Elabore um programa em C++ que solicite o peso e a altura de uma
determinada pessoa. Após a digitação, exibir se esta pessoa está ou não com
seu peso ideal, conforme tabela abaixo:*/

#include <iostream>

using namespace std;

int main()
{
   float peso, altura, imc;

   cout << "Digite peso: ";
   cin >> peso;

   cout << "Digite altura: ";
   cin >> altura;

   imc = peso / (altura * altura);

   if(imc < 20)
   {
       cout << " Seu imc está abaixo do peso ideal "  << imc;
   }

   else if(imc >= 20 && imc < 25)
   {
       cout << " Seu imc está no peso ideal " << imc;
   }

   else
   {
       cout << " Seu imc está acima do peso ideal " << imc;
   }


}
