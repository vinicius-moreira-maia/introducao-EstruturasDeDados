#include <stdio.h>
#include <stdlib.h>

// sempre liberar memória alocada (evitar memory leak)
// sempre checar se a alocação/realocação foi bem sucedida (se o retorno não foi NULL)

int main()
{
    int TAM = 5; // tamanho do array
    int *arr; // ponteiro para armazenar o endereço da memória alocada

    // alocação para caber 5 inteiros
    arr = malloc(TAM * sizeof(int));
    

    // checagem de erro de alocação
    if (arr == NULL)
    {
        printf("Erro na alocação!\n");
        return 1;
    }

    printf("Digite %d números: \n", TAM);
    for (int i = 0; i < TAM; i++)
    {
         scanf("%d", &arr[i]);
    }

    // realocação
    TAM = 10;
    arr = realloc(arr, TAM * sizeof(int));

    // checagem de erro de alocação (realocação)
    if (arr == NULL)
    {
        printf("Erro na alocação!\n");
        return 1;
    }

    printf("Digite mais %d números: \n", TAM - 5);
    for (int i = 5; i < TAM; i++)
    {
         scanf("%d", &arr[i]);
    }

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