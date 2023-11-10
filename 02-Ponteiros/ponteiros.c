#include <stdio.h>
#include <string.h>

/*
    Para executar arquivos em C:
      1: make <nome_do_arquivo> (compilar)
      2: ./<nome_do_arquivo> (executar)
*/

int main()
{
    int n = 4;

    // ponteiro que armazena o endereço de n
    int *p = &n;

    // uma vez declarado, não preciso repetir o asterisco, o compilador entende que é um ponteiro
    printf("%p\n", p);

    // usando o asterisco de novo significa: "vá até o endereço deste ponteiro e me dê o valor lá contido"
    printf("%d\n", *p);
    
    return 0;
}