#include <stdio.h>

int main()
{
    int passaro = 0;
    int total = 0;
    printf("Quantidade de passaro(s): ");
    scanf("%d", &passaro);

    total = (passaro * 30);

    printf("O total de ração no dia é de %d gramas.", total);

    return 0;
}