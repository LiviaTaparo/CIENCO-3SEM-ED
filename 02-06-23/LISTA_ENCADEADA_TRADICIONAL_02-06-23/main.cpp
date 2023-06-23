#include <iostream>


using namespace std;

// Defini��o da estrutura do n� da lista encadeada
struct Node
{
    int dado; //dado do n�
    Node* proximo; //ponteiro para o pr�ximo n�
};

//fun��o para criar um novo n� com dado fornecido
Node* criarNo(int dado)
{
    Node* novoNo = new Node;
    novoNo->dado = dado;
    novoNo->proximo = nullptr;
    return novoNo;
}

//fun��o para inserir um n� do inicio da lista
void inserirNoInicio(Node** cabeca, int dado)
{
    //cria um novo n�
    Node* novoNo = criarNo(dado);

    //Define o pr�ximo do novo n� como o n� atual no inicio da lista
    novoNo->proximo = *cabeca;

    //Atualiza o ponteiro para o novo n� como o novo n� no inicio da lista
    *cabeca = novoNo;
}

//Fun��o para remover um n� com o dado fornecido da lista
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

    //Procura o n� a ser removido na lista
    Node* anterior = *cabeca;
    Node* atual = (*cabeca) ->proximo;
    while(atual != nullptr && atual->dado != dado)
    {
        anterior = atual;
        atual = atual ->proximo;
    }

    //se o n� foi encontrado, remove-o da lista
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
//Fun��o para imprimir os elementos da lista
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
    Node* cabeca = nullptr; //Ponteiro para o primeiro n� da lista

    //Inser��o de elemntos na lista
    inserirNoInicio(&cabeca, 10);
    inserirNoInicio(&cabeca, 20);
    inserirNoInicio(&cabeca, 30);

    //imprime os elementos da lista
    imprimirLista(cabeca);

    //remove um n� da lista
    removerNo(&cabeca,20);

    //imprime os elementos atualizados da lista
    imprimirLista(cabeca);

}
