#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    int A[10]; // Inicializa o vetor sem valores definidos
    srand(time(0)); // Semente para geração de números aleatórios

    // Gera números aleatórios entre 10 e 90
    for (int i = 0; i < 10; i++) {
        A[i] = (rand() % 81) + 10; // Gera um número entre 10 e 90
    }

    // Exibe o vetor
    printf("A) ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}