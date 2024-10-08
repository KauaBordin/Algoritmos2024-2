#include <stdio.h>

int main() 
{
    double numero, soma;
    for(int i = 0; i < 15; i++)
    {
        printf("Escreva o %d° número: ", i + 1);
        scanf("%lf", &numero);
        soma += numero;
    }
    printf("\nA soma dos números é: %.2f.", soma);
    printf("\nA média dos números é: %.2f.", soma/15);

    return 0;
}