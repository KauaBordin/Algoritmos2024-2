#include <stdio.h>

int main()
{
    double GA = 0.0;
    double GB = 0.0;
    double resultado = 0.0;
    printf("Digite sua nota do GA: ");
    scanf("%lf", &GA);
    printf("Digite sua nota do GB: ");
    scanf("%lf", &GB);

    resultado = (GA * 1/3) + (GB * 2/3);

    printf("Sua média final é: %.2f", resultado);

    return 0;
}