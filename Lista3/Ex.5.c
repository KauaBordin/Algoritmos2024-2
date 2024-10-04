#include <stdio.h>

int main()
{
    int n1, resto;
    printf("Digite um número: ");
    scanf("%d", &n1);

    resto = n1 % 2;

    if(resto == 0)
    {
        printf("O número é par");
    }
    else
    {
        printf("O número é ímpar");
    }
    
    return 0;
}