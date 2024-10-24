#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int total = 0;
    int A[7];
    for(int i = 0; i < 7; i++)
    {
        A[i] = rand() % 21;
        printf("Dia %d. Chuva: %d.", i+1, A[i]);
        total = total + A[i];
        if(A[i] < 5)
        {
            printf(" Alerta de possivel seca.");
        }
        printf("\n");
    }
    
    printf("\nTotal de chuva acumulada: %d", total);
    printf("");
    

    return 0;
}