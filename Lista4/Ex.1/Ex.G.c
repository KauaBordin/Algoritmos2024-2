#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int sorteio, n = 0, p = 0, z = 0;
    srand(time(0));
    for(int i = 0; i < 20; i++)
    {
        sorteio = (rand() % 21) - 10;
        if(sorteio < 0)
        {
            printf("\n(NEGATIVO) | %d", sorteio);
            n += 1;
        }
        else if(sorteio == 0)
        {
            printf("\n(NULO)     |  %d", sorteio);
            z += 1;
        }
        else
        {
            printf("\n(POSITIVO) | +%d", sorteio);
            p += 1;
        }
    }
    printf("\n\nNúmeros POSITIVOS: %d", p);
    printf("\nNúmeros NULOS: %d", z);
    printf("\nNúmeros NEGATIVOS: %d", n);

    return 0;
}