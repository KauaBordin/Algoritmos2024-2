#include <stdio.h>

int main()
{
    double n1 = 0.0, n2 = 0.0;
    printf("Digite um número: ");
    scanf("%lf", &n1);

    if(n1 == 0)
    {
        printf("Se o número digitado é (0), continua (0)");
    }
    else if(n1 > 0)
    {
        n2 = (n1 * 2);
        printf("O dobro é %.2f", n2);
    }
    else if(n1 < 0)
    {
        n2 = (n1 * 3);
        printf("O triplo é %.2f", n2);
    }

    return 0;
}