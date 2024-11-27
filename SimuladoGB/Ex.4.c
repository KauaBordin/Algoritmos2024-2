#include <stdio.h>
#include <string.h>

// Definindo a struct Livro
typedef struct {
    char titulo[100];
    char autor[100];
    int ano;
    int paginas;
} Livro;

// Função para cadastrar um livro
Livro cadastrarLivro(char titulo[], char autor[], int ano, int paginas) {
    Livro livro;
    strcpy(livro.titulo, titulo);  // Copia o título
    strcpy(livro.autor, autor);    // Copia o autor
    livro.ano = ano;                // Define o ano
    livro.paginas = paginas;       // Define o número de páginas
    return livro;
}

// Função para exibir as informações de um livro
void exibirLivro(Livro livro) {
    printf("Título: %s\n", livro.titulo);
    printf("Autor: %s\n", livro.autor);
    printf("Ano de publicação: %d\n", livro.ano);
    printf("Número de páginas: %d\n\n", livro.paginas);
}

int main() {
    Livro biblioteca[5];  // Criação de um array de 5 livros
    
    // Cadastro de 5 livros
    biblioteca[0] = cadastrarLivro("O Senhor dos Anéis", "J.R.R. Tolkien", 1954, 1216);
    biblioteca[1] = cadastrarLivro("1984", "George Orwell", 1949, 328);
    biblioteca[2] = cadastrarLivro("Dom Casmurro", "Machado de Assis", 1899, 448);
    biblioteca[3] = cadastrarLivro("O Pequeno Príncipe", "Antoine de Saint-Exupéry", 1943, 96);
    biblioteca[4] = cadastrarLivro("Harry Potter e a Pedra Filosofal", "J.K. Rowling", 1997, 223);
    
    // Exibindo os livros cadastrados
    printf("Livros cadastrados na biblioteca:\n\n");
    for (int i = 0; i < 5; i++) {
        printf("Livro %d:\n", i + 1);
        exibirLivro(biblioteca[i]);
    }
    
    return 0;
}