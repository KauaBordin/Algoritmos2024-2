#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main()
{
    int n1, n2, soma, resto, escolha;
    bool verific1 = true, verific2 = true;

    while(verific1)
    {
        printf("\nEscolha PAR ou Ímpar: (Digite, 1 para PAR e 2 para ÍMPAR)\n");
        printf("\n1 - ÍMPAR\n");
        printf("2 - PAR\n");
        printf("\nResposta: ");
        scanf("%d", &escolha);

        if(escolha == 1 || escolha == 2)
        {
            verific1 = false;
        }
        else
        {
            printf("\nNúmero inválido, tente novamente.\n");
        }
    }

    while(verific2)
    {
        printf("\nEscolha um número de 0 a 5: ");
        scanf("%d", &n1);
        if(n1 < 0 || n1 > 5)
        {
            printf("\nNúmero inválido, tente novamente.\n"); 
        }
        else
        {
            verific2 = false;
        }
    }

    srand(time(0));
    n2 = rand() % 5 + 1;
    printf("Número da maquina: %d\n", n2);

    soma = n1 + n2;
    resto = soma % 2;

    if((resto == 0 & escolha == 2) || (resto != 0 & escolha == 1))
    {
        printf("\nVocê venceu!!");
    }
    else
    {
        printf("\nVocê perdeu!! A maquina venceu.");
    }
    
    return 0;
}