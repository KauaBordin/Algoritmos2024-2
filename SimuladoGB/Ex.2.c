#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerarToupeiras(char M[4][4])
{
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        { 
            M[i][j] = '-';
        }
    }

}

void imprimirToupeiras(char M[4][4])
{
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        { 
            printf("%c ", M[i][j]);
        }
    printf("\n");
    }
}

int main()
{
    int n;
    char I, J;
    srand(time(0));
    printf("Digite um valor para (n): ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        printf("\n%d° geração: \n", i+1);
        char A[4][4];
        gerarToupeiras(A);
        for(int j = 0; j < 4; j++)
        {
            while(A)
            { 
                I = rand() % 4;
                J = rand() % 4;
                if(A[I][J] == '-')
                {
                    break;
                }
            }
            A[I][J] = 'T';
        }
        imprimirToupeiras(A);
    }
    
    return 0;

}