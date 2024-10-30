#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    srand(time(0));
    printf("A) ");
    for(int i = 1; i < 10; i++)
    {
        A[i] = (rand() % 81) + 10;
        printf("Vetor 1: %d\n", A[i]);
    }
}