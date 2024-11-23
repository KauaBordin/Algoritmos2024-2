#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int A[6] = {0}, N;
    printf("Digite o número de lançamentos do dado: ");
    scanf("%d", &N);
    srand(time(0));
    for(int i = 0; i < N; i++)
    {
        int resultado = rand() % 6;
        A[resultado]++;
    }

    printf("Resultados do lançamento: \n");
    for(int i = 0; i < 6; i++)
    {
        double percentual = (double)A[i] / N * 100;
        printf("Face %d: %d vezes (%.2f%%)\n", i+1, A[i], percentual);
    }
    
    return 0;
}