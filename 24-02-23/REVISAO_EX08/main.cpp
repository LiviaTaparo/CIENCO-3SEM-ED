/*8. Em uma eleição presidencial existem dois candidatos. Os votos são
informados através de códigos. Os dados utilizados para a contagem dos
votos têm-se a seguinte codificação: 1,2= voto para os respectivos
candidatos; 3= voto nulo; 4= voto em branco; Elabore um programa em C++
que leia o código do candidato em um voto. Como finalizador do conjunto
de votos, tem-se o valor 0. Calcule e escreva: (1) percentual de votos para
cada candidato; (2) percentual de votos nulos; (3) percentual de votos em
branco;*/
#include <iostream>

using namespace std;

int main()
{
    float pvcUm, pvcDois, pvn, pvb, totalV;
    int cUm = 0, cDois= 0, cNulo=0, cBranco=0, c;


        do
        {
        cout <<"Digite o numero do candidato:\n (1 Candidato Fulano) \n (2 Candidato Siclano)\n (3 Nulo)\n (4 Branco)\n (Digite 0 p/ sair)\n";
        cin  >> c;
        switch(c)
        {
        case 1:
            cUm++;
            break;
        case 2:
            cDois++;
            break;
        case 3:
            cNulo++;
            break;
        case 4:
            cBranco++;
            break;
            default:
            cout << "Invalido\n";
            break;

        }

        }
        while(c!=0);

        totalV = cUm + cDois + cNulo + cBranco;

        pvcUm = cUm / totalV;
        pvcDois = cDois / totalV;
        pvn = cNulo / totalV;
        pvb = cBranco / totalV;

        cout << "\nPorcentagem Fulano: " << pvcUm;
        cout << "\nPorcentagem Siclano: " << pvcDois;
        cout << "\nPorcentagem Nulo: " << pvn;
        cout << "\nPorcentagem Branco: " << pvb;





}
