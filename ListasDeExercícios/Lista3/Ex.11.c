#include <stdio.h>
#include <stdbool.h>

int main()
{
    int VE, Q = 0;
    bool A = true;
    
    while(A)
    {
        printf("\nDigite o valor: ");
        scanf("%d", &VE);
        if(VE <= 0)
        {
            printf("Valor inválido, digite um número maior que 0(ZERO).\n ");
        }
        else
        {
            A = false;
        }
    }
    A = true;

    while(A)
    {
        if(VE > 100)
        {
            VE = VE - 100;
            Q = Q + 1;
        }
        else
        {
            A = false;
        }
    }
    if(Q > 0)
    {
        printf("\n%d nota(s) de R$ 100.\n", Q);
    }
    A = true;
    Q = 0;
    
    while(A)
    {
        if(VE > 50)
        {
            VE = VE - 50;
            Q = Q + 1;
        }
        else
        {
            A = false;
        }
    }
    if(Q > 0)
    {
        printf("%d nota(s) de R$ 50.\n", Q);
    }
    A = true;
    Q = 0;

    while(A)
    {
        if(VE > 20)
        {
            VE = VE - 20;
            Q = Q + 1;
        }
        else
        {
            A = false;
        }
    }
    if(Q > 0)
    {
        printf("%d nota(s) de R$ 20.\n", Q);
    }
    A = true;
    Q = 0;

    while(A)
    {
        if(VE > 10)
        {
            VE = VE - 10;
            Q = Q + 1;
        }
        else
        {
            A = false;
        }
    }
    if(Q > 0)
    {
        printf("%d nota(s) de R$ 10.\n", Q);
    }
    A = true;
    Q = 0;
    
    while(A)
    {
        if(VE > 5)
        {
            VE = VE - 5;
            Q = Q + 1;
        }
        else
        {
            A = false;
        }
    }
    if(Q > 0)
    {
        printf("%d nota(s) de R$ 5.\n", Q);
    }
    A = true;
    Q = 0;

    while(A)
    {
        if(VE > 0)
        {
            VE = VE - 1;
            Q = Q + 1;
        }
        else
        {
            A = false;
        }
    }
    if(Q > 0)
    {
        printf("%d nota(s) de R$ 1.\n", Q);
    }

    return 0;
}