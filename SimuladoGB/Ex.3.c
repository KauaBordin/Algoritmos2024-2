#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int V[20];
    int Z=0, U=0, D=0, T=0, Q=0;
    printf("V = ");
    for(int i = 0; i < 20; i++)
    {
        V[i] = rand() % 5;
        printf("%d ", V[i]);
        if(V[i] == 0)
        {
            Z++;
        }
        else if(V[i] == 1)
        {
            U++;
        }
        else if(V[i] == 2)
        {
            D++;
        }
        else if(V[i] == 3)
        {
            T++;
        }
        else if(V[i] == 4)
        {
            Q++;
        }
    }

    printf("\n\nQuantidade de valores 0: %d\n", Z);
    printf("Quantidade de valores 1: %d\n", U);
    printf("Quantidade de valores 2: %d\n", D);
    printf("Quantidade de valores 3: %d\n", T);
    printf("Quantidade de valores 4: %d\n", Q);

    return 0;
}