#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int Matriz[5][5];
    int Contagem[5] = {0, 0, 0, 0, 0};
    srand(time(0));

    //Criação da matriz.
    printf("Matriz: \n\n");
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            Matriz[i][j] = rand() % 5;
            printf("%d ", Matriz[i][j]);

            //Verificação da quantidade de números de 0 a 4.
            for(int k = 0; k < 5; k++)
            { 
                if(Matriz[i][j] == k)
                {
                    Contagem[k]++;
                }
            }
        }
        printf("\n");
    }
    //Impressão dos resultados.
    for(int i = 0; i < 5; i++)
    {
        printf("\nQuantidade de valores %d: %d", i, Contagem[i]);
    }

    return 0;
}