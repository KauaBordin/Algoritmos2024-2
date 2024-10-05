#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main()
{
    double produto = 0.0, venda = 0.0;
    printf("Valor do produto: ");
    scanf("%lf", &produto);

    if(produto > 0 & produto < 20)
    {
        venda = produto + (produto * 45/100);
        printf("O valor de venda é %.2f reais. (45/100)", venda);
    }
    else if(produto >= 20 & produto <= 50)
    {
        venda = produto + (produto * 35/100);
        printf("O valor de venda é %.2f reais. (35/100)", venda);
    }
    else if(produto > 50)
    {
        venda = produto + (produto * 25/100);
        printf("O valor de venda é %.2f reais. (25/100)", venda);
    }
    else
    {
        printf("Valor inválido!");
    }

    return 0;
}