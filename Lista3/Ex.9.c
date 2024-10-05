#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int opção;
    double dolar = 0.0, euro = 0.0, real = 1, valorf = 0.0;
    char moeda[100];

    printf("Informe quantos reais equivalem a um dolar: ");
    scanf("%lf", &dolar);
    printf("Informe quantos reais equivalem a um euro: ");
    scanf("%lf", &euro);
    printf("\nEscolha uma das opções abaixo:\n");
    printf("\n1) Converter de Real para Euro\n");
    printf("2) Converter de Real para Dólar\n");
    printf("3) Converter de Euro para Dólar\n");
    printf("4) Converter de Euro para Real\n");
    printf("5) Converter de Dólar para Euro\n");
    printf("6) Converter de Dólar para Real\n");
    printf("\nResposta: ");
    scanf("%d", &opção);

    if(opção < 1 || opção > 6)
    {
        printf("Valor inválido!");
        exit(0);
    }

    printf("\nValor a ser convertido: ");
    scanf("%lf", &valorf);

    if(opção == 1)
    {
        strcpy(moeda, "euros");
        valorf = valorf * (real / euro);
    }
    else if(opção == 2)
    {
        strcpy(moeda, "dolares");
        valorf = valorf * (real / dolar);
    }
    else if(opção == 3)
    {
        strcpy(moeda, "dolares");
        valorf = valorf * (euro / dolar);
    }
    else if(opção == 4)
    {
        strcpy(moeda, "reais");
        valorf = valorf * (euro / real);
    }
    else if(opção == 5)
    {
        strcpy(moeda, "euros");
        valorf = valorf * (dolar / euro);
    }
    else if(opção == 6)
    {
        strcpy(moeda, "reais");
        valorf = valorf * (dolar / real);
    }

    printf("O valor convertido é %.2f %s\n", valorf, moeda);
    
    return 0;
}