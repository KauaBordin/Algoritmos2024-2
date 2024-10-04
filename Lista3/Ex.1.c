#include<stdio.h>

double n1 = 0.0;
double n2 = 0.0;
double resultado = 0.0;

int main()
{
    printf("Digite o numerador para a divisão: ");
    scanf("%lf", &n1);

    printf("Digite um número diferente de zero(0) para o divisor: ");
    scanf("%lf", &n2);
    if(n2 == 0)
    {
        printf("Erro, numero digitado igual a zero");
    } else
    {
        resultado = n1 / n2;
        printf("O resulado da divisão é %.2f\n", resultado);
    }
    return 0;
}