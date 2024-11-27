#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int A[5], n, J, I, temp;
    srand(time(0));
    for(int i = 0; i < 5; i++)
    {
        A[i] = rand() % 9;
        printf("%d ", A[i]);
    }
    printf("\nDigite o valor de (n): ");
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
    {
        I = rand() % 4;
        printf("\nI = %d\n", I);
        J = rand() % 4;
        printf("J = %d\n", J);
        temp = A[I];
        A[I] = A[J];
        A[J] = temp;
        for(int j = 0; j < 5; j++)
        {
            printf("%d ", A[j]);
        }
        printf("\n");
    }
 
    return 0;
}