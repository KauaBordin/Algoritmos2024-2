#include <stdio.h>

int main()
{
    double litros = 0.0;
    double valor = 0.0;
    double gazoza = 0.0;
    printf("Preço da gazolina (Escreva usando ponto): ");
    scanf("%lf", &gazoza);
    printf("Valor disponível (Escreva usando ponto): ");
    scanf("%lf", &valor);

    litros = valor / gazoza;

    printf("Pode-se abastecer, %.2f litros com o valor disponível", litros);


    return 0;
}