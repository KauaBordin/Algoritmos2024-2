#include <stdio.h>

int main() 
{
    double numero, soma, n;
    printf("Digite a quantidade de números para serem somados: ");
    scanf("%lf", &n);
    for(int i = 0; i < n; i++)
    {
        printf("Escreva o %d° número: ", i + 1);
        scanf("%lf", &numero);
        soma += numero;
    }
    printf("\nA soma dos números é: %.2f.", soma);

    return 0;
}