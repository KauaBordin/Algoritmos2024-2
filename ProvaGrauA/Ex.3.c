#include <stdio.h>

int main()
{
    int A, B, C, D, E;
    printf("Dia 1: ");
    scanf("%d", &A);
    printf("Dia 2: ");
    scanf("%d", &B);
    printf("Dia 3: ");
    scanf("%d", &C);
    printf("Dia 4: ");
    scanf("%d", &D);
    printf("Dia 5: ");
    scanf("%d", &E);

    printf("\nO deslocamento total ao longo do período: %d\n", A+B+C+D+E);
    if(A>=B && A>=C && A>=D && A>=E)
    {
        printf("O maior deslocamento registrado: %d\n", A);
    }
    else if(B>=A && B>=C && B>=D && B>=E)
    {
        printf("O maior deslocamento registrado: %d\n", B);
    }
    else if(C>=B && C>=A && C>=D && C>=E)
    {
        printf("O maior deslocamento registrado: %d\n", C);
    }
    else if(D>=B && D>=C && D>=A && D>=E)
    {
        printf("O maior deslocamento registrado: %d\n", D);
    }
    else if(E>=B && E>=C && E>=D && E>=A)
    {
        printf("O maior deslocamento registrado: %d\n", E);
    }
    printf("A média dos deslocamentos diários: %d",(A+B+C+D+E)/5 );

    return 0;
}