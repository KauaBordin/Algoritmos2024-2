#include <stdio.h>

int main() 
{
    int real, dolar, resultado;
    dolar = 6;
    printf("Digite o valor que deseja ser convertido: ");
    scanf("%d", &real);
    resultado = real / dolar;
    printf("%d reais corresponde a %d dolares. ",real, resultado);


    return 0;
}