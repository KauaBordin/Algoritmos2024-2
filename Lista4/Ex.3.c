#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    char a[1];
    while(1)
    {
        printf("\nDigite um número para tabuada: ");
        scanf("%d", &n);
        for(int i = 0; i < 11; i++)
        {
            printf("%d x %d = %d\n", n, i, n * i);
        }
        printf("Calcular outro número (s/n)? ");
        scanf("%s", &a);
        if(strcmp(a, "n") == 0)
        {
            break;
        }
    }
    return 0;
}