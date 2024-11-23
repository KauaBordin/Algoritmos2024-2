#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int M[5][5];
    srand(time(0));
    printf("Matriz original: \n");
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            M[i][j] = (rand() % 19) - 9;
            printf("%s%d ", M[i][j] < 0 ? "" : " ", M[i][j]);
        }
    printf("\n");
    }

    printf("\nMatriz com sinais trocados: \n");
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            M[i][j] = M[i][j] * -1;
            printf("%s%d ", M[i][j] < 0 ? "" : " ", M[i][j]);
        }
    printf("\n");
    }

    return 0;
}