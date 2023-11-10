#include <stdio.h>
#include <stdlib.h>


/*
 -> Listas Simplesmente Encadeadas <-
 
    - Já que não é memória contínua, não há como acessar um elemento diretamente, é preciso percorrer toda a lista.

    - Complexidade:
        Busca -> O(n)
        Inserção (começo) -> O(1)
        Inserção (fim) -> O(n)
        Remoção (começo) -> O(1)
        Remoção (fim) -> O(n)
*/


typedef struct node
{
    int data;
    struct node *next; // ponteiro para o próximo registro
}Node;


void add_beginning(Node **head, int data);
void print_list(Node *head);
Node* create_node(int data);


int main()
{
    // ponteiro do tipo nó (é a referência da minha lista) 
    Node *head = NULL;

    // enviando o endereço do ponteiro
    add_beginning(&head, 1);
    add_beginning(&head, 11);
    add_beginning(&head, 234);
    add_beginning(&head, -28);

    print_list(head);

    return 0;
}


// 2 asteriscos = ponteiro para um ponteiro (estou recebendo o endereço de um ponteiro)
void add_beginning(Node **head, int data)
{
    // novo nó com espaço alocado (new_node é um ponteiro)
    Node *new_node = create_node(data);


    // atribuição no campo 'next' do novo nó (-> para acessar os campos via ponteiro)
    new_node -> next = *head; // atribuindo em next o valor apontado por 'head' (desreferência), que é um valor NULL
    // ^ nessa atribuição tanto head, que é um ponteiro para nós, como o campo next, que também é um ponteiro para um nó, apontam para o mesmo endereço de memória, que contém o valor NULL (na função main eu atribuí esse NULL para o ponteiro *head)
    
    // agora o valor de head (desreferência) pode ser o endereço de new_node que a referência não será perdida
    *head = new_node;
}


// recebendo o endereço de memória
void print_list(Node *head)
{
    while (head != NULL)
    {
        printf("%d ", head -> data);
        head = head -> next;
    }
    printf("\n");
}


// criando e retornando o endereço de um novo nó
Node* create_node(int data)
{
    Node *new_node = malloc(sizeof(Node));
    new_node -> data = data;
    new_node -> next = NULL;

    return new_node;
}