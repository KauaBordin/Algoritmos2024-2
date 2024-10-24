#include <stdio.h>

int main()
{
    char a [100];
    printf("Qual é o verdadeiro nome do super-herói Batman? \n");
    printf("\n");
    printf("A) Bruce Wayne\n");
    printf("B) Clark Kent\n");
    printf("C) Peter Parker\n");
    printf("D) Tony Stark\n");
    printf("E) Steve Rogers\n");
    printf("\n");
    printf("Digite sua resposta: ");
    scanf("%s", &a);
    printf("\n");
    printf("Você respondeu alternativa (%s). A resposta correta é a alternativa (A).", a);

    return 0;
}