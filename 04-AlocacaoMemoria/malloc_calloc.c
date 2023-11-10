#include <stdio.h>
#include <stdlib.h>


// alocar memória dinamicamente significa reservar espaço de memória em tempo de execução do programa (memória heap)

// alocar memória estaticamente significa reservar espaço de memória em tempo de compilação (memória stack)

/*
    malloc() -> função que aloca uma quantidade x de bytes e retorna um endereço para a primeira posição dessa memória alocada

    calloc() -> similar a malloc(), mas inicializa todos os bytes com zero

    realloc() -> realocação, permite alterar o tamanho de uma porção de memória previamente alocada 

    free() -> liberação de memória alocada
*/


int main()
{
    int TAM = 5; // tamanho do array
    int *arr; // ponteiro para armazenar o endereço da memória alocada

    // alocação para caber 5 inteiros
    // arr = malloc(TAM * sizeof(int));
    arr = calloc(TAM, sizeof(int));

    // checagem de erro de alocação
    if (arr == NULL)
    {
        printf("Erro na alocação!\n");
        return 1;
    }

    /*
    printf("Digite %d números: \n", TAM);
    for (int i = 0; i < TAM; i++)
    {
         scanf("%d", &arr[i]);
    }
    */

    printf("\nVetor: ");

    for (int i = 0; i < TAM; i++)
    {
         printf("%d ", arr[i]);
    }

    printf("\n");
    
    // liberando a memória alocada (evitar vazamento)
    free(arr);

    return 0;
}