#include <iostream>
#include <string>

#define ZOO 2

using namespace std;

struct ANIMAL
{
    string nomeAnimal;
    string especieAnimal;
    int idadeAnimal;
    float pesoAnimal;

};

int main()
{
    ANIMAL cadastro[ZOO];

    for(int i = 0; i < ZOO; i ++)
    {

        cout << "Digite nome do animal: ";
        getline(cin, cadastro[i].nomeAnimal);


        cout << "Digite especie: ";
        getline(cin, cadastro[i].especieAnimal);


        cout << "Digite idade: ";
        cin >> cadastro[i].idadeAnimal;


        cout << "Digite peso: ";
        cin >> cadastro[i].pesoAnimal;

        cin.ignore();


        cout << "-----------------------" << endl;


    }

    for(int i = 0; i < ZOO; i ++)
    {
        cout << "Registro Animal " << i << endl
        << "Nome: " << cadastro[i].nomeAnimal << endl
        << "Especie: " << cadastro[i].especieAnimal << endl
        << "Idade: " << cadastro[i].idadeAnimal << endl
        << "Peso: " << cadastro[i].pesoAnimal << endl
        << "------------------------------" <<endl;
    }

}
