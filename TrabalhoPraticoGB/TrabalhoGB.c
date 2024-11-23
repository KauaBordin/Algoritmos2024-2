#include <stdio.h>
#include <string.h>

// Definição das structs
typedef struct {
    char nome[30];
    int quantidade;
} Ingrediente;

typedef struct {
    char nome[30];
    int ingredientes[7]; // Índices dos ingredientes
    int quantidades[7];  // Quantidades necessárias
} Pocao;

// Funções auxiliares
void consultarIngredientes(Ingrediente ingredientes[], int totalIngredientes) {
    printf("\nIngredientes Disponíveis:\n");
    for (int i = 0; i < totalIngredientes; i++) {
        printf("%d. %s: %d\n", i + 1, ingredientes[i].nome, ingredientes[i].quantidade);
    }
}

void prepararPocao(Pocao pocoes[], int totalPocoes, Ingrediente ingredientes[], int totalIngredientes) {
    printf("\nEscolha a poção para preparar (1 a %d):\n", totalPocoes);
    for (int i = 0; i < totalPocoes; i++) {
        printf("%d. %s\n", i + 1, pocoes[i].nome);
    }

    int escolha;
    scanf("%d", &escolha);

    if (escolha < 1 || escolha > totalPocoes) {
        printf("Opção inválida.\n");
        return;
    }

    Pocao selecionada = pocoes[escolha - 1];
    int podePreparar = 1;

    printf("\nVerificando ingredientes para %s...\n", selecionada.nome);
    for (int i = 0; i < 7; i++) {
        int idxIngrediente = selecionada.ingredientes[i];
        if (idxIngrediente != -1) {
            if (ingredientes[idxIngrediente].quantidade < selecionada.quantidades[i]) {
                printf("Ingrediente em falta: %s (Necessário: %d, Disponível: %d)\n",
                       ingredientes[idxIngrediente].nome, selecionada.quantidades[i], ingredientes[idxIngrediente].quantidade);
                podePreparar = 0;
            }
        }
    }

    if (podePreparar) {
        printf("Poção criada com sucesso!\n");
        for (int i = 0; i < 7; i++) {
            int idxIngrediente = selecionada.ingredientes[i];
            if (idxIngrediente != -1) {
                ingredientes[idxIngrediente].quantidade -= selecionada.quantidades[i];
            }
        }
    }
}

void reabastecerIngrediente(Ingrediente ingredientes[], int totalIngredientes) {
    consultarIngredientes(ingredientes, totalIngredientes);

    printf("\nEscolha um ingrediente para reabastecer (1 a %d): ", totalIngredientes);
    int escolha;
    scanf("%d", &escolha);

    if (escolha < 1 || escolha > totalIngredientes) {
        printf("Opção inválida.\n");
        return;
    }

    printf("Digite a quantidade a adicionar ao estoque de %s: ", ingredientes[escolha - 1].nome);
    int quantidade;
    scanf("%d", &quantidade);

    if (quantidade > 0) {
        ingredientes[escolha - 1].quantidade += quantidade;
        printf("Estoque atualizado com sucesso!\n");
    } else {
        printf("Quantidade inválida.\n");
    }
}

// Função principal
int main() {
    // Definição dos ingredientes
    Ingrediente ingredientes[7] = {
        {"Pó de Fênix", 100},
        {"Essência Celestial", 50},
        {"Raiz de Dragão", 45},
        {"Orvalho Lunar", 30},
        {"Flores secas", 200},
        {"Elixir amargo", 20},
        {"Lágrimas de unicórnio", 15}};

    // Definição das poções
    Pocao pocoes[5] = {
        {"Poção de Cura", {0, 1, 4, 6, -1, -1, -1}, {30, 20, 20, 10, 0, 0, 0}},
        {"Poção Força da Floresta", {3, 2, 4, -1, -1, -1, -1}, {20, 30, 30, 0, 0, 0, 0}},
        {"Poção Sabedoria da Riqueza", {1, 0, -1, -1, -1, -1, -1}, {30, 50, 0, 0, 0, 0, 0}},
        {"Poção Sorte no Amor", {3, 4, 6, -1, -1, -1, -1}, {10, 50, 5, 0, 0, 0, 0}},
        {"Poção Malvada", {5, 2, -1, -1, -1, -1, -1}, {10, 15, 0, 0, 0, 0, 0}}};

    int opcao;
    do {
        printf("\nMenu Principal\n");
        printf("1. Consultar Ingredientes Disponíveis\n");
        printf("2. Preparar Poção\n");
        printf("3. Reabastecer Ingrediente\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                consultarIngredientes(ingredientes, 7);
                break;
            case 2:
                prepararPocao(pocoes, 5, ingredientes, 7);
                break;
            case 3:
                reabastecerIngrediente(ingredientes, 7);
                break;
            case 4:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opção inválida.\n");
        }
    } while (opcao != 4);

    return 0;
}