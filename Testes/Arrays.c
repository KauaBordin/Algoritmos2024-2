#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Criação do array
    int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Tamanho do array
    int tamanho = sizeof(A) / sizeof(A[0]);

    printf("O terceiro elemento é: %d\n", A[2]);
    printf("Tamanho do array: %d\n", tamanho);
    printf("O ultimo elemento é: %d\n", A[tamanho-1]);

    // Criação de arrays de floats com 5 posições
    float B[5];

    // Atribuir valor ao array já criado anteriormente
    B[0] = 3.1416;
    B[1] = 9.9;
    B[2] = B[0] + B[1];

    printf("%f + %f = %f\n", B[0], B[1], B[2]);

    // Percorrer o array i inicializar todas a posições
    // Usando um contador como índice para acessá-lo

    for(int i = 0; i < 5; i++)
    {
        B[i] = rand() % 101 / 100.0;
        printf("B[%d] = %f\n", i, B[i]);
    }

    return 0;
}