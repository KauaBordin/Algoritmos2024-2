#include <stdio.h>

int main()
{
    int ndmediçoes = 0;
    int A, B, C, D, E, F, G, H;
    printf("Medição 1: ");
    scanf("%d", &A);
    printf("Medição 2: ");
    scanf("%d", &B);
    printf("Medição 3: ");
    scanf("%d", &C);
    printf("Medição 4: ");
    scanf("%d", &D);
    printf("Medição 5: ");
    scanf("%d", &E);
    printf("Medição 6: ");
    scanf("%d", &F);
    printf("Medição 7: ");
    scanf("%d", &G);
    printf("Medição 8: ");
    scanf("%d", &H);

    if(A >= 150)
    {
        ndmediçoes += 1;
    }
    if(B >= 150)
    {
        ndmediçoes += 1;
    }
    if(C >= 150)
    {
        ndmediçoes += 1;
    }
    if(D >= 150)
    {
        ndmediçoes += 1;
    }
    if(E >= 150)
    {
        ndmediçoes += 1;
    }
    if(F >= 150)
    {
        ndmediçoes += 1;
    }
    if(G >= 150)
    {
        ndmediçoes += 1;
    }
    if(H >= 150)
    {
        ndmediçoes += 1;
    }

    printf("\nMédia de poluição diária: %d\n", (A+B+C+D+E+F+G+H)/8);
    if(ndmediçoes > 0)
    {
        printf("Alerta!! A qualidade do ar está ruim.\n");
        
    }
    printf("Número total de medições que geraram o alerta: %d\n", ndmediçoes);

    return 0;
}