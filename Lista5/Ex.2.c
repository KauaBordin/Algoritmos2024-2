#include <stdio.h>

int main()
{
    int A[5];
    for(int i = 0; i < 5; i++)
    {
        printf("Digite o %dº número: ", i+1);
        scanf("%d", &A[i]);
    }
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", A[i] * i);
    }
    return 0;
}