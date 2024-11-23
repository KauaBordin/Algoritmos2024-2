#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int litros[31], total = 0 ,maior = 0, menor = 500, resmenor, resmaior;
    srand(time(0));
    for(int i = 1; i < 30; i++)
    {
        litros[i] = (rand() % 401) + 100;
        printf("Dia %d: %d\n", i, litros[i]);
        total = total + litros[i];
        if(litros[i] < menor)
        {
            menor = litros[i];
            resmenor = i;
        }
        if(litros[i] > maior)
        {
            maior = litros[i];
            resmaior = i;
        }
    }
    printf("\nConsumo de água do mês: %d\n", total);
    printf("Média do consumo do mês: %d\n", total/30);
    printf("Dias com maior e menor consumo de água respectivamente: %d, %d", resmaior, resmenor);

    return 0;
}