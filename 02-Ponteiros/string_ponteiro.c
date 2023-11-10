#include <stdio.h>
#include <string.h>

/*
    Para executar arquivos em C:
      1: make <nome_do_arquivo> (compilar)
      2: ./<nome_do_arquivo> (executar)
*/

// basicamente, permite criar um novo nome para um tipo
typedef char* string;

int main()
{
    /*
       Uma string é um vetor de caracteres. E enquanto vetor, trata-se apenas de uma referência para o primeiro elemento. 
    */

    // 2 formas de criar strings
    char *nome = "Vinicius";
    char pal[] = "xuxu"; // posso omitir o tamanho se for logo inicializado

    // apesar de não existir o tipo string, há placeholder para ele
    printf("%s\n", nome);
    printf("%s\n", pal);

    // usando o tipo string, definido com o typedef
    string frase = "meu deusssssss";
    printf("%s\n", frase);

    // já que frase se trata de um ponteiro para o elemento 0, se eu usar o asterisco posso acessar esse valor, que é um tipo char
    printf("%c\n", *frase); // *frase == frase[0]
    printf("%c\n", *(frase + 1)); // *(frase + 1) == frase[1]

    // -> Cada posição do vetor é um byte diferente, não importa o tamanho (em bytes) do elemento de cada posição
    
    return 0;
}