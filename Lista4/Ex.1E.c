#include<stdio.h>

int main() 
{
    int i = 0;
    int num;
    int soma = 0;

    for(i = 0; i < 15; i++)
    {
        printf("Número %d: ", i + 1);
        scanf("%d", &num);
        soma += num;
    }
    printf("%d", &soma);
    return 0;
}