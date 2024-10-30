#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int A[10];
    srand(time(0));
    printf("A) ");
    for(int i = 0; i < 10; i++)
    {
        A[i] = (rand() % 81) + 10;
        printf("%d ", A[i]);
    }
}