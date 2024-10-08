#include <stdio.h>

int main()
{
    int D, I, F, resto;
    printf("Entre com o valor do divisor: ");
    scanf("%d", &D);
    printf("Início do intervalo: ");
    scanf("%d", &I);
    printf("Final do intervalo: ");
    scanf("%d", &F);

    for(int i = I; i < F; i++)
    {
        resto = i % D;
        if(resto == 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}