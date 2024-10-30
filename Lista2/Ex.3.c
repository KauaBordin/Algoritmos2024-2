#include <stdio.h>

int main() 
{
    double peso = 0.0;
    double resultado = 0.0;

    printf("Digite o peso do prato (use ponto para decimal): ");
    scanf("%lf", &peso);

    resultado = 40.0 * peso;
    printf("O preço do seu prato é: %.2f\n", resultado);

    return 0;
}