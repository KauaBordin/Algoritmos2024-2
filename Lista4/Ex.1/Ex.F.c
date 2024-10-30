#include <stdio.h>

int main() 
{
    int numero, quant, resto, impar = 0, par = 0;
    for(int i = 0; i < 10; i++)
    {
        printf("Escreva o %d° número: ", i + 1);
        scanf("%d", &numero);
        resto = numero % 2;
        if(resto != 0)
        {
            impar += 1;
        }
        else
        {
            par += 1;
        }
    }
    printf("\nQuantidade de números ímpares: %d", impar);
    printf("\nQuantidade de números pares: %d", par);

    return 0;
}