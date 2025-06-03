#include <stdio.h>

int main() {
    // Número de casas para cada peça
    int movimentoTorre = 5;
    int movimentoBispo = 5;
    int movimentoRainha = 8;

    // -----------------------------
    // Movimento da TORRE: 5 casas para a DIREITA
    // Utiliza estrutura de repetição FOR
    // -----------------------------
    printf("Movimento da Torre:\n");
    for (int i = 0; i < movimentoTorre; i++) {
        printf("Direita\n");
    }

    // -----------------------------
    // Movimento do BISPO: 5 casas na diagonal para CIMA e DIREITA
    // Utiliza estrutura de repetição WHILE
    // -----------------------------
    printf("\nMovimento do Bispo:\n");
    int i = 0;
    while (i < movimentoBispo) {
        printf("Cima Direita\n");
        i++;
    }

    // -----------------------------
    // Movimento da RAINHA: 8 casas para a ESQUERDA
    // Utiliza estrutura de repetição DO-WHILE
    // -----------------------------
    printf("\nMovimento da Rainha:\n");
    int j = 0;
    do {
        printf("Esquerda\n");
        j++;
    } while (j < movimentoRainha);

    return 0;
}
