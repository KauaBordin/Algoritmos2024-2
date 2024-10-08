#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opção, valor = 300;

    while(1)
    {
        printf("\nEscolha uma opção: \n");
        printf("1 - Dependentes crianças com menos de 10 anos pagam R$100\n");
        printf("2 - Dependentes com idade entre 10 e 30 anos pagam R$220\n");
        printf("3 - Dependentes com idade entre 31 e 60 anos pagam R$ 395\n");
        printf("4 - Dependentes com mais de 60 anos pagam R$ 480\n");
        printf("5 - Nâo possuo dependentes. \n");
        printf("Resposta: ");
        scanf("%d", &opção);

        if(opção >= 1 && opção <= 5)
        {
            break;
        }
        else
        {
            printf("Erro, digite 1, 2, 3, 4 ou 5 para escolher.\n");
        }
    }

    switch (opção)
    {
    case 1:
        valor = valor + 100;
        break;
    case 2:
        valor = valor + 220;
        break;
    case 3:
        valor = valor + 395;
        break;
    case 4:
        valor = valor + 480;
        break;
    case 5:
        printf("\nO valor do seu plano de saúde é 300 reais.");
    default:
        break;
    }

    if(opção != 5)
    {
        printf("\nSeu plano de saúde custa %d reais.", valor);
    }
    
    return 0;
}