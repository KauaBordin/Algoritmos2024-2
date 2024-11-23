#include <stdio.h>

int main()
{
    int passos[8] = {0},meta[8] = {0}, total = 0;
    for(int i = 1; i < 8; i++)
    {
        printf("Passos do %d° dia da semana: ", i);
        scanf("%d", &passos[i]);
        total = total + passos[i];
        if(passos[i] >= 10000)
        {
            meta[i]++;
        }
    }
    printf("\nTotal de números de passos na semana: %d\n", total);
    printf("Média dos passos da semana: %d\n", total/7);
    for(int i = 1; i < 8; i++)
    {
        if(meta[i] != 0)
        {
            printf("Meta de 10.000 passos alcançados no dia %d\n", i);
        }
    }

    return 0;
}