/*1. Elabore um programa em C++ que solicite o peso e a altura de uma
determinada pessoa. Ap�s a digita��o, exibir se esta pessoa est� ou n�o com
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
       cout << " Seu imc est� abaixo do peso ideal "  << imc;
   }

   else if(imc >= 20 && imc < 25)
   {
       cout << " Seu imc est� no peso ideal " << imc;
   }

   else
   {
       cout << " Seu imc est� acima do peso ideal " << imc;
   }


}
