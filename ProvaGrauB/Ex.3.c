#include <stdio.h>
#include <string.h>

void criarVetor(char A[10])
{
    for(int i = 0; i < 10; i++)
    {
        printf("%d° questão: ", i+1);
        scanf(" %c", &A[i]);
    }
}

int main()
{
    char Gabarito[10];
    char Resposta[10];
    int Nota = 0;

    //Criar vetor gabarito.
    printf("Cadastro do gabarito: \n");
    criarVetor(Gabarito);

    //Criar vetor resposta.
    printf("\nCadastro da resposta: \n");
    criarVetor(Resposta);

    //Imprimir respotas.
    printf("\nCorreção: ");
    for(int i = 0; i < 10; i++)
    {
        if(Gabarito[i] == Resposta[i])
        {
            Nota++;
            printf("\nQuestão %d: resposta correta", i+1);
        }
        else
        {
            printf("\nQuestão %d: resposta incorreta. A resposta correta é %c.", i+1, Gabarito[i]);
        }
    }
    printf("\n\nA pontuação do estudante é: %d/10", Nota);

    return 0;
}