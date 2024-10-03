#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main()
{
    srand(time(0));
    int posHamster1 = 0, posHamster2 = 0;
    bool acabou = false;
    while(acabou == false)
    {

//--------------Hamster[1]--------------//
        
        system("cls");
        int n = rand() % 5 + 1;
        if(n == 1)
        {
        posHamster1++;
        }
        else if(n == 2)
        {
            posHamster1 = posHamster1 + 2;
        }
        else if(n == 4)
        {
            posHamster1--;
        }
        else if(n == 5)
        {
            posHamster1 -= 2;
        }
        else if(posHamster1 < 0)
        {
            posHamster1 = 0;
        }

//--------------Hamster[2]--------------//

        int m = rand() % 5 + 1;
        if(m == 1)
        {
        posHamster2++;
        }
        else if(m == 2)
        {
            posHamster2 = posHamster2 + 2;
        }
        else if(m == 4)
        {
            posHamster2--;
        }
        else if(m == 5)
        {
            posHamster2 -= 2;
        }
        else if(posHamster2 < 0)
        {
            posHamster2 = 0;
        }

//Ilustrar a corrida atravéz de "*":

        if(posHamster1 > 12)
        {
            posHamster1 = 12;
        }
        printf("Hamster[1]: ");
        for(int i = 1; i <= posHamster1; i++)
        {
            printf("*");
        }        
        printf("\n");
        
        if(posHamster2 > 12)
        {
            posHamster2 = 12;
        }
        printf("Hamster[2]: ");
        for(int i = 1; i <= posHamster2; i++)
        {
            printf("*");
        }        
        printf("\n");
        
//Verificar se a corrida acabou:
        
        if(posHamster1 == 12 & posHamster2 == 12)
        {
            printf("O jogo empatou!!");
            acabou = true;
        }
        else if(posHamster1 == 12)
        {
            printf("Vitória do Hamster[1]");
            acabou = true;
        }
        else if(posHamster2 == 12)
        {
            printf("Vitória do Hamster[2]");
            acabou = true;
        }
    }
    return 0;
}

//Não coloquei "system("cls");", pois, ficou zerando somente metade das respostas.