#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    srand(time(0));
    int sorteio = rand() % (50 - (-50) + 1) - 50;
    printf("Número sorteado: %d", sorteio);

    return 0;
}