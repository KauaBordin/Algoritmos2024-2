#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int ponto[5] = {0}, maior = 0, maiorp, B = 0, B1;
    srand(time(0));
    for(int i = 1; i < 6; i++)
    {
        for(int j = 1; j < 5; j++)
        {
            int result = rand() % 100 + 1;
            ponto[j] = ponto[j] + result;
            if(result >= 80)
            {
                B++;
                B1 = j;
            }
            if(ponto[j] > maior)
            {
                maior = ponto[j];
                maiorp = j;
            }
        }
    if(B > 0)
    { 
        printf("\nRodada %d:\n", i);
        printf("Rodada de Destaque, jogador N° %d!\n", B1);
        B = 0;
    }
    }
    printf("\nPontuação: \n");
    printf("Jogador N° 1: %d\n", ponto[1]);
    printf("Jogador N° 2: %d\n", ponto[2]);
    printf("Jogador N° 3: %d\n", ponto[3]);
    printf("Jogador N° 4: %d\n", ponto[4]);

    printf("\nO jogador N° %d venceu!", maiorp);

    return 0;
}