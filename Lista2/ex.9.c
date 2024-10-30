#include <stdio.h>

int main()
{
    double valor = 0.0;
    double desconto = 0.0;
    printf("Valor da compra: ");
    scanf("%lf", &valor);
    desconto = valor - (valor * 15/100);
    printf("O valor com desconto é de %.2f reais.", desconto);

    return 0;
}