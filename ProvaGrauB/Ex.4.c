#include <stdio.h>
#include <string.h>

int main()
{
    char frase[100];
    printf("Digite uma palavra ou frase: ");
    fgets(frase, sizeof(frase), stdin);
    
    for(int i = 0; i < 100; i++)
    {
        if(frase[i] == 'r')
        {
            strcpy(frase[i], "l");
        }
    }
    printf("String digitada: %s", frase);

    return 0;
}



