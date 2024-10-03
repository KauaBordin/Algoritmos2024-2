#include<stdio.h>

float n1, n2, resultado;

int main()
{
    printf("Digite o numerador para a divisão: ");
    scanf("%f", &n1);

    printf("Digite um número diferente de zero(0) para o divisor: ");
    scanf("%f", &n2);
    if(n2 == 0)
    {
        printf("Erro, numero digitado igual a zero");
    } else
    {
        resultado = n1 / n2;
        printf("O resulado da divisão é %.2f\n", &resultado);
    }
    return 0;
    }