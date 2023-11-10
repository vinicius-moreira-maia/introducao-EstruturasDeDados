#include <stdio.h>
#include <string.h>

typedef char* string;

int main()
{
    // Máximo e Mínimo de um vetor de inteiros
    int nums[5] = {1, 3, 2, 1, 5};
    int max = nums[0];
    int min = nums[0];
    
    for (int i = 0; i < 5; i ++)
    {
        if (nums[i] > max) 
        {
            max = nums[i];
        }
        if (nums[i] < min) 
        {
            min = nums[i];
        }
        
    }
  
    // printf("Maior: %d\n", max);
    // printf("Menor: %d\n", min);

/*
    float notas[5];
  
    for (int i = 0 ; i < 5; i++)
    {
      printf("digite a %d° nota: ", i + 1);
      
      // & é posição na memória, &notas[i] é a posição do elemento i do vetor notas
      scanf("%f", &notas[i]); // entrada de dados
    }
  
    printf("\n");
    
    for (int i = 0; i < 5; i++)
    {
        // 2 casas decimais
        printf("%.2f\n", notas[i]);
    }
  */

  // Vetor de ponteiros, cada posição dele aponta para um vetor de caracteres (strings)
  // char *nomes[] = {"Vinicius", "Zé", "xuxu", "zezé", "oi"};
  string nomes[] = {"Vinicius", "Zé", "xuxu", "zezé", "oi"};
  int tam = 0;

  for (int i = 0; i < 5; i++)
    {
      tam = strlen(nomes[i]);
      printf("Tamanho da %dº palavra: %d\n", i+1, tam);
    }
  
    // retornar 0 significa execução bem sucedida
    return 0;
}