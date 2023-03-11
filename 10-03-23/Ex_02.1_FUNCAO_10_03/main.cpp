#include <iostream>

using namespace std;


int quadrado(int n)
{
    return n * n;
}

int main()
{
   int s1, s2, s3;

   cout << "Entre tres inteiros: ";
   cin >> s1 >> s2 >> s3;

   if(s1 > 0 && s2 > 0 && s3 > 0 && (quadrado(s1) + quadrado(s2) == quadrado(s3) || quadrado(s2)+ quadrado(s3)== quadrado(s1) || quadrado(s3)+ quadrado(s1) == quadrado(s2)))
   {
       cout << " " << s1 << " " << s2 << " " << s3 << " podem formar um triangulo retangulo\n";

   }
   else
   {
        cout << " " << s1 << " " << s2 << " " << s3 << " nao podem formar um triangulo retangulo\n";
   }
}

