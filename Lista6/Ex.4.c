#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    //Algoritmo que preenche uma matriz 4x6 com valores inteiros aleatórios entre -10 e 10.
    int M[4][6], soma2l=0, soma5c=0, somamult=0, somacolunapar=0, somalinhaimpar=0;
    srand(time(0));
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            M[i][j] = (rand() % 20 + 1) - 10;
            //Imprimir matriz.
            if(M[i][j] < 0)
            {
                printf("%d ", M[i][j]);
            }
            else
            {
                printf(" %d ", M[i][j]);
            }
            
            //soma dos elementos da segunda linha.
            if(i == 1)
            {
                soma2l += M[i][j];
            }
            //Soma dos elementos da quinta coluna.
            if(j == 4)
            {
                soma5c += M[i][j];
            }
            //Soma dos elementos só das colunas com índices pares.
            if((j % 2) == 0)
            {
                somacolunapar += M[i][j];
            }
            //Soma dos elementos só das linhas com índices ímpares.
            if((i % 2) != 0)
            {
                somalinhaimpar += M[i][j];
            }
        }
        printf("\n");
    }
    //Soma da multiplicação dos elementos da primeira linha pelos elementos da quarta linha.
    for(int i = 0; i < 4; i++)
    {
        somamult += M[0][i] * M[3][i];
    }
    //Imprimir resultado.
    printf("\nA) Soma dos elementos da segunda linha: %d\n", soma2l);
    printf("B) Soma dos elementos da quinta coluna: %d\n", soma5c);
    printf("C) Soma da multiplicação dos elementos da primeira linha pelos elementos da quarta linha: %d\n", somamult);
    printf("D) Soma dos elementos só das colunas com índices pares: %d\n", somacolunapar);
    printf("E) Soma dos elementos só das linhas com índices ímpares: %d\n", somalinhaimpar);

    return 0;
}