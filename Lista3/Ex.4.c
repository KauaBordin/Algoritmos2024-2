#include <stdio.h>

int main()
{
    int n1, resto;
    printf("Digite um número: ");
    scanf("%d", &n1);

    resto = n1 % 3;
    if(resto != 0)
    {
        printf("O número não é divisível por 3.");
    }
    else
    {
        printf("O número é divisível por 3.");
    }

    return 0;
}