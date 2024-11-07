#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int A[10], B = 0, med = 0, maior = 0;
    int C[10], menor = 90, soma = 0, produto = 1;
    int VPares[10], numpares = 0;
    int VImpares[10], numimpares = 0;
    srand(time(0));
    printf("A) ");
    for(int i = 0; i < 10; i++)
    {
        A[i] = (rand() % 81) + 10;
        printf("%d ", A[i]);
        if(A[i] == 50)
        {
            B++;
        }
        med += A[i];
        if(A[i] > maior)
        {
            maior = A[i];
        }
        if(A[i] < menor)
        {
            menor = A[i];
        }
        soma += A[i];
        produto *= A[i];
    }
    if(B > 0)
    {
        printf("\nB) O valor '50' existe.\n");
    }
    else
    {
        printf("\nB) o valor '50' não existe.\n");
    }
    printf("C) O valor '50' aparece %d veze(s).\n", B);
    printf("D) A média dos valores é %d.\n", med/10);
    printf("E) O maior e menor elemento é respectivamente %d e %d\n", maior, menor);
    printf("F) A soma e produto é respectivamente %d e %d\n", soma, produto);
    printf("G) ");
    int j = 0;
    for(int i = 9; i > -1; i--)
    {
        printf("%d ", A[i]);
        C[j] = A[i];
        j += 1;
    }
    printf("\nH) ");
    for(int i = 0; i < 10; i++)
    {
        printf("%d ", C[i]);
        if(C[i] % 2 == 0)
        {
            VPares[numpares] = C[i];
            numpares++;
        }
        else
        {
            VImpares[numimpares] = C[i];
            numimpares++;
        }
    }

    printf("\nI) VPares = { ");
    for(int i = 0; i < numpares; i++)
    {
        printf("%d ", VPares[i]);
    }
    printf("}\n   VImpares = { ");
    for(int i = 0; i < numimpares; i++)
    {
        printf("%d ", VImpares[i]);
    }
    printf("}");

    return 0;
}