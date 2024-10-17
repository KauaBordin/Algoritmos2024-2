#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    srand(time(0));
    bool Z = true;
    while(Z)
    {
        int A = rand() % 10 + 1;
        printf("\nNúmero sorteado - 1: %d\n", A);
        int B = rand() % 10 + 1;
        printf("Número sorteado - 2: %d\n", B);
        int C = rand() % 10 + 1;
        printf("Número sorteado - 3: %d\n", C);

        if(A < B && B < C)
        {
            printf("\nOS NÚMEROS SATISFAZEM A CONDIÇÃO!!");
            Z = false;
        }
    }
    return 0;
}