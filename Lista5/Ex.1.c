#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    srand(time(0));
    printf("A) ");
    for(int i = 0; i < 10; i++)
    {
        A[i] = (rand() % 81) + 10;
        printf("%d ", A[i]);
    }




    return 0;
}