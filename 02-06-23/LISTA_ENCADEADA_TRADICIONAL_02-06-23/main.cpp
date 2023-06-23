#include <iostream>


using namespace std;

// Definição da estrutura do nó da lista encadeada
struct Node
{
    int dado; //dado do nó
    Node* proximo; //ponteiro para o próximo nó
};

//função para criar um novo nó com dado fornecido
Node* criarNo(int dado)
{
    Node* novoNo = new Node;
    novoNo->dado = dado;
    novoNo->proximo = nullptr;
    return novoNo;
}

//função para inserir um nó do inicio da lista
void inserirNoInicio(Node** cabeca, int dado)
{
    //cria um novo nó
    Node* novoNo = criarNo(dado);

    //Define o próximo do novo nó como o nó atual no inicio da lista
    novoNo->proximo = *cabeca;

    //Atualiza o ponteiro para o novo nó como o novo nó no inicio da lista
    *cabeca = novoNo;
}

//Função para remover um nó com o dado fornecido da lista
void removerNo(Node** cabeca, int dado)
{
    //Verifica se a lista esta vazia
    if(*cabeca == nullptr)
    {
        cout << "Lista vazia. Nenhum no removido." << endl;
        return;
    }
    if((*cabeca)->dado == dado)
    {
        Node* temp = *cabeca;
        *cabeca = (*cabeca)->proximo;
        delete temp;
        cout << "No removido." << endl;
        return;
    }

    //Procura o nó a ser removido na lista
    Node* anterior = *cabeca;
    Node* atual = (*cabeca) ->proximo;
    while(atual != nullptr && atual->dado != dado)
    {
        anterior = atual;
        atual = atual ->proximo;
    }

    //se o nó foi encontrado, remove-o da lista
    if(atual != nullptr)
    {
        anterior->proximo = atual->proximo;
        delete atual;
        cout << "No removido." << endl;
    }
    else
    {
        cout << "No nao encontrado na lista"<<endl;
    }
}
//Função para imprimir os elementos da lista
void imprimirLista(Node* cabeca)
{
    cout << "Elementos da lista: ";
    while(cabeca !=nullptr)
    {
        cout << cabeca->dado << " ";
        cabeca = cabeca->proximo;
    }
    cout << endl;
}
int main()
{
    Node* cabeca = nullptr; //Ponteiro para o primeiro nó da lista

    //Inserção de elemntos na lista
    inserirNoInicio(&cabeca, 10);
    inserirNoInicio(&cabeca, 20);
    inserirNoInicio(&cabeca, 30);

    //imprime os elementos da lista
    imprimirLista(cabeca);

    //remove um nó da lista
    removerNo(&cabeca,20);

    //imprime os elementos atualizados da lista
    imprimirLista(cabeca);

}
