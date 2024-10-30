#include <stdio.h>

int main()
{
    double A = 0.0, B = 0.0, C = 0.0;
    double AB = 0.0, AC = 0.0, ABC = 0.0;
    printf("Digite o primeiro número: ");
    scanf("%lf", &A);
    printf("Digite o segundo número: ");
    scanf("%lf", &B);
    printf("Digite o terceiro número: ");
    scanf("%lf", &C);

    AB = (A + B);
    AC = (A + C);
    ABC = (A + B + C);

    if(AB < AC)
    {
        printf("\nResultado da soma dos números: %.2f", ABC);
    }
    else
    {
        printf("\n(A + B) é maior que (A + C)!");
    }

    return 0;
}