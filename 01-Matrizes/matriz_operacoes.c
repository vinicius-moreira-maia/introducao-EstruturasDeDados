#include <stdio.h>

// constantes
#define LINHA 3
#define COL 3

// protótipos de funções
void exibe_matriz(int m[LINHA][COL]);
void soma_matriz(int m1[LINHA][COL], int m2[LINHA][COL]);
void subtrai_matriz(int m1[LINHA][COL], int m2[LINHA][COL]);
void multiplica_matriz(int m1[LINHA][COL], int m2[LINHA][COL]);

int main() 
{
    // matriz tem 3 vetores de 3 elementos
    int m1[LINHA][COL] = {{1, 2, 3}, {4, 5, 6}, {1, 1, 1}};
    int m2[LINHA][COL] = {{10, 22, 33}, {4, 15, 36}, {1, 1, 1}};
    
    // exibe_matriz(m1);
    // exibe_matriz(m2);

    soma_matriz(m1, m2);
    subtrai_matriz(m1, m2);
    multiplica_matriz(m1, m2);

    return 0;
}

void exibe_matriz(int m[LINHA][COL]) 
{
    for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COL; j ++)
        {
            printf("%d: %d\n", i, m[i][j]);
        }
    }
    printf("\n");
}

void soma_matriz(int m1[LINHA][COL], int m2[LINHA][COL])
{
    printf("==== SOMA ====\n");
    int m3[LINHA][COL];

    for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COL; j ++)
        {
            m3[i][j] = m1[i][j] + m2[i][j];
        }
    }

    exibe_matriz(m3);
}

void subtrai_matriz(int m1[LINHA][COL], int m2[LINHA][COL])
{
    printf("==== SUBTRAÇÃO ====\n");
    int m3[LINHA][COL];

    for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COL; j ++)
        {
            m3[i][j] = m1[i][j] - m2[i][j];
        }
    }

    exibe_matriz(m3);
}

void multiplica_matriz(int m1[LINHA][COL], int m2[LINHA][COL])
{
    printf("==== MULTIPLICAÇÃO ====\n");
    int m3[LINHA][COL];

    for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COL; j ++)
        {
            int soma = 0;
            for (int k = 0; k < COL; k ++)
            {
               soma += m1[i][k] * m2[k][j];
            }
            m3[i][j] = soma;
        }
    }

    exibe_matriz(m3);
}
