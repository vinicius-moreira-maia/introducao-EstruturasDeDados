#include <stdio.h>

/*
    - Registros (structs) são variáveis compostas heterogêneas(suportam campos de diferentes tipos).
    - Possibilitam a criação de estruturas personalizadas e mais complexas.
    - Usa-se o ponto '.' para acessar o campo de um registro, e a flecha '->' para acessar o campo através do ponteiro de um registro.
*/

typedef char* string;

// definição do registro
struct Pessoa
{
    string nome;
    string cidade;
    int idade;
};

void imprimePessoa(struct Pessoa p);
void alteraIdade(struct Pessoa *p, int novaIdade);

int main()
{
    // criação (instanciação?) do registro
    struct Pessoa pessoa1;
    
    // Atribuição dos campos
    pessoa1.nome = "Vinicius";
    pessoa1.cidade = "Fortaleza";
    pessoa1.idade = 29;

    struct Pessoa pessoa2 = {"Camila", "Fortaleza", 37};

    imprimePessoa(pessoa1);
    imprimePessoa(pessoa2);

    alteraIdade(&pessoa2, 40);

    imprimePessoa(pessoa2);

    return 0;
}


// recebe o registro por valor (cópia)
void imprimePessoa(struct Pessoa p)
{
    printf("Nome: %s\n", p.nome);
    printf("Cidade: %s\n", p.cidade);
    printf("idade: %d\n\n", p.idade);
}


// recebe o registro por referência (endereço de memória)
void alteraIdade(struct Pessoa *p, int novaIdade)
{
    // Significa "Vá até o campo idade desde endereço de memória e atribua novaIdade a ele"
    p -> idade = novaIdade;
}