#include <stdio.h>

// interface da função precisa ser declarada antes, caso a função não seja
void exibe_matriz(int m[2][3]);

int main() 
{
    // 2 linhas e 3 colunas
    // matriz tem 2 vetores de 3 elementos
    int m[2][3] = {{1, 2, 3}, {4, 5, 6}};
    
    // m é o ponteiro para o primeiro elemento
    // printf("%p\n", m);

    exibe_matriz(m);
     
}

void exibe_matriz(int m[2][3]) 
{
    // lembrar que vetor é passado por referência, qualquer alteração aqui afeta em todo canto, pois é o mesmo endereço de memória

    // m é o ponteiro para o primeiro elemento
    // printf("%p\n", m);

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j ++)
        {
            printf("%d: %d\n", i, m[i][j]);
        }
    }
}
