#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    double GA = 0.0, GB = 0.0, resultado = 0.0;
    bool A = true, B = false;
    char resp[20];
    printf("Digite sua nota do GA: ");
    scanf("%lf", &GA);
    printf("Digite sua nota do GB: ");
    scanf("%lf", &GB);

    while(1)
    {
        resultado = (GA * 1/3) + (GB * 2/3);
        printf("Sua média é: %.2f\n", resultado);

        if(B == true)
        {
            break;
        }
        
        if (resultado >= 6)
        {
            printf("Você passou direto!");
            exit(0);
        }
        else
        {
            printf("\nVocê ficou de recuperação (Grau C)");
        }    

        while(A)
        {
            printf("\nVocê quer substituir a nota do Grau A ou B? ");
            scanf("%s", &resp);
            if(strcmp(resp, "a") == 0 || strcmp(resp, "b") == 0 )
            {
                A = false;
            }
            else
            {
                printf("Erro, responda a ou b.\n");
            }
        }

        printf("Digite a nota do Grau C: ");
        if(resp == "A")
        {
            scanf("%lf", &GA);
        }
        else
        {
            scanf("%lf", &GB);
        }
        printf("\n");
        B = true;
    }

if(resultado >= 6)
{
    printf("Você foi aprovado!");
}
else
{
    printf("Você foi reprovado!");
}

return 0;
}