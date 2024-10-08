#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n;
    srand(time(0));
    int sort = rand() % 10 + 1;   
    printf("Tente acertar o número, você tem 3 tentativas: "); 
    
    for(int i = 3; i > 0; i--)
    {        
        scanf("%d", &n);
        if(n < sort)
        {
            printf("Errou, o número está para CIMA");
        }
        else if(n > sort)
        {
            printf("Errou, o número está para BAIXO");
        }
        else
        {
            printf("Parabéns, você acertou!");
            break;
        }

        if(i > 1)
        {
            printf("\nTente novamente, você tem %d chance(s): ", i - 1);
        }
        else
        {
            printf("\nVocê excedeu o números de tentativas.");
        }
    }

    return 0;
}