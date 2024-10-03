#include <stdio.h>

int main()
{
    int valorfinal;
    int desconto;
    int total;
    int camisas;
    int calças;
    int cintos;
    printf("Quantidade de camisa(s): ");
    scanf("%d", &camisas);
    printf("Quantidade de calça(s): ");
    scanf("%d", &calças);
    printf("Quantidade de cinto(s): ");
    scanf("%d", &cintos);
    printf("\n");

    total = (camisas * 25) + (calças * 100) + (cintos * 40);
    int total2 = total;
    desconto = (total * 10/100);
    valorfinal = (total2 - desconto);

    printf("Valor total das compra: %d reais\n", total);
    printf("Desconto concedido: %d reais\n", desconto);
    printf("Valor com desconto: %d reais\n", valorfinal);

    return 0;
}