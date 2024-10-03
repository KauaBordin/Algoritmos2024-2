#include <stdio.h>

int main()
{
    int smart = 0;
    int tablet = 0;
    int total = 0;
    printf("Quantidade de smartphone(s): ");
    scanf("%d", &smart);
    printf("Quantidade de tablet(s): ");
    scanf("%d", &tablet);

    total = (smart * 1000) + (tablet * 1500);

    printf("O total arrecadado no dia foi %d,00 reais.", total);


    return 0;
}