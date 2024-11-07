#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int A[10], B = 0, med = 0, maior = 0;
    int C[10], menor = 90, soma = 0, produto = 1;
    int vPares[10], vImpares[10]; // Vetores para armazenar os pares e ímpares
    int numPares = 0, numImpares = 0; // Contadores para o número de pares e ímpares
    srand(time(0));

    printf("A) ");
    // Preenche o vetor A com números aleatórios e faz os cálculos necessários
    for(int i = 0; i < 10; i++)
    {
        A[i] = (rand() % 81) + 10;
        printf("%d ", A[i]);
        
        // Contagem de 50
        if(A[i] == 50)
        {
            B++;
        }
        
        // Cálculos para média, maior, menor, soma e produto
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
        
        // Se o número é par, coloca em vPares
        if (A[i] % 2 == 0)
        {
            vPares[numPares] = A[i];
            numPares++; // Incrementa o contador de pares
        }
        else
        {
            vImpares[numImpares] = A[i];
            numImpares++; // Incrementa o contador de ímpares
        }
    }

    // Exibição dos resultados
    if(B > 0)
    {
        printf("\nB) O valor '50' existe.\n");
    }
    else
    {
        printf("\nB) O valor '50' não existe.\n");
    }
    
    printf("C) O valor '50' aparece %d veze(s).\n", B);
    printf("D) A média dos valores é %d.\n", med / 10);
    printf("E) O maior e menor elemento é respectivamente %d e %d\n", maior, menor);
    printf("F) A soma e produto é respectivamente %d e %d\n", soma, produto);
    
    // Inversão do vetor
    printf("G) ");
    for(int i = 9, j = 0; i >= 0; i--, j++)
    {
        printf("%d ", A[i]);
        C[j] = A[i]; // Armazena na posição correta do vetor C
    }
    
    printf("\nH) ");
    for(int i = 0; i < 10; i++)
    {
        printf("%d ", C[i]); // Exibe o vetor invertido
    }

    // Exibição do vetor vPares
    printf("\nI) Elementos pares: ");
    for (int i = 0; i < numPares; i++)
    {
        printf("%d ", vPares[i]);
    }
    
    // Exibição do vetor vImpares
    printf("\nJ) Elementos ímpares: ");
    for (int i = 0; i < numImpares; i++)
    {
        printf("%d ", vImpares[i]);
    }

    return 0;
}