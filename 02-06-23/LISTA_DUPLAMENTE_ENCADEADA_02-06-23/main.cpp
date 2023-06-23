#include <iostream>

using namespace std;

//Definição da estrutura do nó da lista duplamente encadeada
struct Node
{
    int dado; //Dado do nó
    Node* anterior; //Ponteiro para o nó anterior
    Node* proximo; //ponteiro para o proximo nó
};

//Função para cirar um novo nó com o dado fornecido
Node* criarNo(int dado)
{
    Node* novoNo = new Node;
    novoNo->dado = dado;
    novoNo->anterior = nullptr;
    novoNo->proximo = nullptr;
    return novoNo;
}

//Função para inserir um nó no inicio da lista
void inserirNoInicio(Node** cabeca, int dado)
{
    //cria um novo nó
    Node* novoNo = criaNo(dado);

    //Atualiza os ponteiros no novo nó e do nó atual no inicio da lista
    novoNo->proximo= *cabeca;
    if(*cabeca != nullptr)
    {
        (*cabeca) ->anterior = novoNo;
    }

    //Atualiza o ponteiro para o novo nó como o novo nó no inicio da lista
    *cabeca = novoNo;
}

//Função para remover um nó com dado fornecido da lista
void removerNo(Node** cabeca, int dado)
{
    //Verifica se a lista esta vazia
    if(*cabeca == nullptr)
    {
        cout << "Lista vazia. Nenhum no removido." << endl;
        return;
    }

    //verifica se o primeiro nó contem o dado a ser removido
    if((*cabeca)->dado == dado)
    {
        Node* temp = *cabeca;
        *cabeca = (*cabeca) ->proximo;

        if(*cabeca != nullptr)
        {
            (*cabeca)->anterior = nullptr;
        }
        delete temp;
        cout << "No removido." << endl;
        return;
    }

    //Procura o nó a ser removido na lista
    Node* atual = *cabeca;
    while(atual != nullptr && atual ->dado != dado)
    {
        atual = atual->proximo;
    }

    //se o nó foi encontrado, remova-o da lista
    if(atual != nullptr)
    {
        if(atual->anterior != nullptr)
        {
            atual->anterior->proximo = atual->proximo;
        }
        if(atual->proximo != nullptr)
        {
            atual->proximo->anterior = atual->anterior;
        }
        delete atual;
        cout << "Noh removido." << endl;
    }
    else
    {
        cout << "No nao encontrado na lista." << endl;
    }
}

//Funcao para imprimir os elementos da lista
void imprimirLista(Node* cabeca)
{
    cout << "Elementos da lista: ";
    while(cabeca != nullptr)
    {
        cout << cabeca->dado << " ";
        cabeca = cabeca->proximo;
    }
    cout << endl;
}
int main()
{
    Node* cabeca = nullptr; //Ponteiro para o inicio da lista

    //Inserindo alguns nós no inicio da lista
    inserirNoInicio(&cabeca, 3);
    inserirNoInicio(&cabeca, 5);
    inserirNoInicio(&cabeca, 7);

    //Imprimindo os elementos da lista
    imprimirLista(cabeca);

    //removendo um nó da lista
    removerNo(&cabeca, 5);

    //Imprimindo os elementos da lista após a remoção
    imprimirLista(cabeca);
}
