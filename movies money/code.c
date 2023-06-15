#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char titulo[100];
    float lucro;
} Filme;

void classificarFilmes(Filme* filmes, int num_filmes) {
    int i, j;
    for (i = 0; i < num_filmes - 1; i++) {
        for (j = 0; j < num_filmes - i - 1; j++) {
            if (filmes[j].lucro < filmes[j+1].lucro) {
                Filme temp = filmes[j];
                filmes[j] = filmes[j+1];
                filmes[j+1] = temp;
            }
        }
    }
}

void exibirClassificacao(Filme* filmes, int num_filmes) {
    printf("%-4s%-40s%-12s\n", "Rank", "Título", "Lucro (em bilhões USD)");
    printf("===============================================\n");
    for (int i = 0; i < num_filmes; i++) {
        printf("%-4d%-40s%-12.2f\n", i + 1, filmes[i].titulo, filmes[i].lucro);
    }
}

int main() {
    // Dados fictícios de filmes
    Filme filmes[] = {
        { "Avatar", 2.847 },
        { "Vingadores: Ultimato", 2.798 },
        { "Titanic", 2.194 },
        { "Star Wars: Episódio VII - O Despertar da Força", 2.068 },
        { "Vingadores: Guerra Infinita", 2.048 }
    };

    int num_filmes = sizeof(filmes) / sizeof(filmes[0]);

    // Classificar filmes pelo lucro
    classificarFilmes(filmes, num_filmes);

    // Exibir tabela de classificação
    exibirClassificacao(filmes, num_filmes);

    return 0;
}
