#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    srand(time(0));
    int minimo = 0, maximo = 100;
    int nSorteado = rand() % (maximo - minimo + 1) + minimo;
    float resultado = nSorteado / 100.00;
    printf("Número sorteado: %.2f", resultado);

    return 0;
}
