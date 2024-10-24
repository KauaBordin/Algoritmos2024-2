#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int dado;
    bool A = true;
    while(A)
    {
        printf("\nInforme 4, 6, 8, 10, 12 ou 16 faces para o dado: ");
        scanf("%d", &dado);

        if(dado == 4 || dado == 6 || dado == 8 || dado == 10 || dado == 12 || dado == 16)
        {
            A = false;
        }
        else
        {
            printf("Número de lados inválido, tente novamente!\n");
        }
    }
    
    srand(time(0));
    int B = rand() % dado + 1;

    printf("Sorteio: %d", B);

    return 0;
}