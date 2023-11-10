#include <stdio.h>

typedef char* string;

// Usando o typedef para me referir à toda a estrutura simplismente como 'Pessoa'
typedef struct
{
    string nome;
    string cidade;
    int idade;
}Pessoa;

void imprimePessoa(Pessoa p);
void alteraIdade(Pessoa *p, int novaIdade);

int main()
{
    // criação (instanciação?) do registro
    Pessoa pessoa1;
    
    // Atribuição dos campos
    pessoa1.nome = "Vinicius";
    pessoa1.cidade = "Fortaleza";
    pessoa1.idade = 29;

    Pessoa pessoa2 = {"Camila", "Fortaleza", 37};

    imprimePessoa(pessoa1);
    imprimePessoa(pessoa2);

    alteraIdade(&pessoa2, 40);

    imprimePessoa(pessoa2);

    return 0;
}

// recebe o registro por valor (cópia)
void imprimePessoa(Pessoa p)
{
    printf("Nome: %s\n", p.nome);
    printf("Cidade: %s\n", p.cidade);
    printf("idade: %d\n\n", p.idade);
}


// recebe o registro por referência (endereço de memória)
void alteraIdade(Pessoa *p, int novaIdade)
{
    // Significa "Vá até o campo idade desde endereço de memória e atribua novaIdade a ele"
    p -> idade = novaIdade;
}