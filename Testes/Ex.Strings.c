#include <stdio.h>
#include <string.h>

const int MAX_STRING = 30;
int main()
{
    char palavra[MAX_STRING];

    strcpy(palavra, "banana");

    printf("Digite uma palavra: ");
    scanf("%s\n", &palavra);

    printf("%s\n", palavra);

    int tam = strlen(palavra);


    return 0;
}