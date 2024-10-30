#include <stdio.h>

int main()
{
    int opção;
    double valor = 0.0;

    while(1)
    {    
        printf("Digite o valor do produto: ");
        scanf("%lf", &valor);
        if(valor <= 0)
        {
            printf("Erro, valor inválido. Tente novamente.");
        }
        else
        {
            break;
        }
    }

    while(2)
    {
        printf("Escolha o método de pagamento: \n");
        printf("\n1 - À vista em dinheiro.\n");
        printf("2 - À vista no cartão de credito.\n");
        printf("3 - Em duas vezes.\n");
        printf("4 - Em três vezes.\n");
        printf("Resposta: ");
        scanf("%d", &opção);
        if(opção != 1 && opção != 2 && opção != 3 && opção != 4)
        {
            printf("Erro, valor inválido. Tente novamente.\n\n");
        }
        else
        {
            break;
        }
    }

    switch (opção)
    {
    case 1:
        valor = valor - (valor * 15/100);
        break;
    case 2:
        valor = valor - (valor * 10/100);
        break;
    case 4:
        valor = valor + (valor * 10/100);
    default:
        break;
    }
    printf("\nO valor a ser pago pelo produto é %.2f reais.", valor);

    return 0;
}