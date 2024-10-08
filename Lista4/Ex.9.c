#include <stdio.h>

int main()
{
    int n, a;
    char c;
    printf("Entre com o número de linhas: ");
    scanf("%d", &n);
    printf("Entre com um caracter: ");
    scanf(" %c", &c);

    for(int i = 1; i <= n; i++)
    {
        printf("\n");
        for(int j = 1; j <= i; j++)
        {
            printf("%c", c);
        }
    }
    return 0;
}