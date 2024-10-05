#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    double salario = 0.0, desconto = 0.0;
    printf("DIgite seu salário: ");
    scanf("%lf", &salario);
    
    desconto = (salario * 11/100);

    if(desconto > 318.20)
    {
        salario = (salario - 318.20);
        printf("\nSalario com desconto é %.2f reais.", salario);
    }
    else
    {
        salario = (salario - desconto);
        printf("\nSalario com desconto é %.2f reais.", salario);
    }

    return 0;
}