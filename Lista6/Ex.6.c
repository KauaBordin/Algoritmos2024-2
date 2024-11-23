#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    double M[10][3];
    srand(time(0));
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(j < 2)
            { 
                M[i][j] = rand() % 10 + 1;
                M[i][2] = (M[i][0] * 1/3) + (M[i][1] * 2/3);
            }
            if(M[i][j] < 10)
            { 
                printf(" %.2f ", M[i][j]);
            }
            else
            {
                printf("%.2f ", M[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}