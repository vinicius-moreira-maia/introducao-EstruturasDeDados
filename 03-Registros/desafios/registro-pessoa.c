#include <stdio.h>
#include <string.h>


typedef struct
{
    char rua[50];
    char cidade[50];
    char estado[50];
}endereco;


typedef struct
{
    char nome[50];
    int idade;
    float altura;
    endereco end;
}pessoa;


#define TAM 5


void imprime_pessoa(pessoa p);
char* mais_alta(pessoa p[]);


int main()
{
    endereco end = {"13 de maio", "Fortaleza", "CE"};
    pessoa p1 = {"Zé", 55, 1.52, end};

    imprime_pessoa(p1);
    printf("\n");

    return 0;

    pessoa pessoas[TAM];

    for (int i = 0; i < TAM; i++)
    {
        printf("Pessoa %d\n", i + 1);

        printf("Digite a idade da pessoa: ");
        scanf("%d", &pessoas[i].idade); // somente um inteiro, tem que por o '&' para ser o endereço
        
        printf("Digite a altura da pessoa: ");
        scanf("%f", &pessoas[i].altura); // somente um float, tem que por o '&' para ser o endereço

        printf("Digite o nome da pessoa: ");
        scanf("%s", pessoas[i].nome); // pessoas[i].nome é um vetor de caracteres (string), o nome já é o endereço do elemento 0

        printf("\n");
    }

    for (int i = 0; i < TAM; i++)
    {
         printf("===== REGISTRO %d =====\n", i + 1);
         imprime_pessoa(pessoas[i]);   
         printf("\n");
    }

    printf("A maior pessoa é: %s\n", mais_alta(pessoas));

    // return 0;
}


// recebendo por valor
void imprime_pessoa(pessoa p)
{
    printf("Nome: %s\n", p.nome);
    printf("Idade: %d\n", p.idade);
    printf("Altura: %.2f\n", p.altura);
    printf("Rua: %s\n", p.end.rua);
    printf("Cidade: %s\n", p.end.cidade);
    printf("UF: %s\n", p.end.estado);
}


char* mais_alta(pessoa p[])
{
    float maior = p[0].altura;
    int indice_maior;

    for (int i = 0; i < TAM; i++)
    {
        if (p[i].altura > maior)
        {
            indice_maior = i;
        }
    }

    return p[indice_maior].nome;
}