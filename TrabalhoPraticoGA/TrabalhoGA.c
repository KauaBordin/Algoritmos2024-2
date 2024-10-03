#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int A;
    while(1)
    {
        printf("\n1 - Nova Simulação\n");
        printf("2 - Sair Do Programa\n");
        printf("Escolha uma opção:");  
        scanf("%d", &A);

        if(A == 2)
        {
            printf("\nEncerrando simulação!");
            exit(0);
        }
        else if(A == 1)
        {
            printf("\n");
        }
        else
        {
            printf("\nOpção Inválida!");
            exit(0);
        }
        
        int população;
        int taxa;
        int ciclos;
        int novapopulação;

        srand(time(0));
        printf("População inicial: ");
        scanf("%d", &população);
        printf("Taxa de crescimento: ");
        scanf("%d", &taxa);
        printf("Números de ciclos: ");
        scanf("%d", &ciclos);
        printf("\n");

        for(int i = 1; i <= ciclos; i++)
        {
            novapopulação = população + ( população * taxa/100);
            int sorteio = rand() % 100 + 1;

            if(população <= 0)
            {
                printf("\n");
                printf("A população morreu! A simulação encerrará... ");
                break;
            }
            else if(sorteio > 0 && sorteio <= 5)
            {
                novapopulação = novapopulação - (novapopulação * 50/100);
                printf("Ciclo %d: População = %d (Condição Adversa: Radiação Ultravioleta)\n", i, novapopulação);
            }
            else if(sorteio > 5 && sorteio <= 15)
            {
                novapopulação = novapopulação - (novapopulação * 20/100);
                printf("Ciclo %d: População = %d (Condição Adversa: Excesso de Umidade)\n", i, novapopulação);
            }
            else if(sorteio > 15 && sorteio <= 30)
            {
                novapopulação = novapopulação - (novapopulação * 25/100);
                printf("Ciclo %d: População = %d (Condição Adversa: Falta De Nutrientes)\n", i, novapopulação);
            }
            else if(sorteio > 30 && sorteio <= 50)
            {
                novapopulação = novapopulação - (novapopulação * 30/100);
                printf("Ciclo %d: População = %d (Condição Adversa: Alta Temperatura)\n", i, novapopulação);
            }
            else if(sorteio > 50 && sorteio <= 60)
            {
                novapopulação = novapopulação + (novapopulação * 20/100);
                printf("Ciclo %d: População = %d (Condição Favorável)\n", i, novapopulação);
            }
            else if(sorteio > 60 && sorteio <= 100)
            {
                printf("Ciclo %d: População = %d\n", i, novapopulação);
            }
        
            população = novapopulação;
        }
        if(população > 0)
        {
            printf("\n");
            printf("Simulação concluída. População final: %d\n", novapopulação);
        }
    }
return 0;
}
