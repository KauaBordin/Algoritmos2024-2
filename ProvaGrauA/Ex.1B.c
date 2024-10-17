#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    while(1)
    {
        srand(time(0));
        int sorteio = rand() % 100 + 21;
        
        if(sorteio >= 20 && sorteio <= 100 && (sorteio % 2) == 0)
        {
            printf("Número sorteado: %d", sorteio);
            break;
        }
    }
    return 0;
}