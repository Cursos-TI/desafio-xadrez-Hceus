#include <stdio.h>


// Função recursiva para movimento da TORRE: direita


void moverTorre(int casasRestantes) {
    if (casasRestantes == 0) return;
    printf("Direita\n");
    moverTorre(casasRestantes - 1);
}

// Função recursiva para movimento da RAINHA: esquerda


void moverRainha(int casasRestantes) {
    if (casasRestantes == 0) return;
    printf("Esquerda\n");
    moverRainha(casasRestantes - 1);
}


// Função recursiva com loops aninhados para o BISPO: cima + direita

void moverBispo(int casasRestantes) {
    if (casasRestantes == 0) return;

    // Loop externo representa o movimento vertical
    for (int i = 0; i < 1; i++) {
        // Loop interno representa o movimento horizontal
        for (int j = 0; j < 1; j++) {
            printf("Cima Direita\n");
        }
    }

    moverBispo(casasRestantes - 1);
}


/* Movimento do CAVALO: 2 casas para cima, 1 para a direita (em "L")
 Usa loops aninhados complexos com múltiplas variáveis */


void moverCavalo(int movimentos) {
    printf("Movimento do Cavalo:\n");

    for (int i = 0; i < movimentos; i++) {
        int movCima = 0;
        int movDireita = 0;

        // Move 2 casas para cima
        while (movCima < 2) {
            printf("Cima\n");
            movCima++;

            // Exemplo de controle com múltiplas variáveis
            if (i == 1 && movCima == 1) {
                // Apenas ilustrando o uso de continue para pular a verificação
                continue;
            }
        }

        // Move 1 casa para a direita
        for (movDireita = 0; movDireita < 1; movDireita++) {
            if (i == movimentos - 1 && movCima == 2) {
                // Exemplo: não mover para a direita no último ciclo (simulação)
                break;
            }
            printf("Direita\n");
        }

        printf("\n"); // separa cada movimento em "L"
    }
}


int main() {
    
    // Configuração dos movimentos
    
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int movimentosCavalo = 3;

    
    // Movimento da TORRE (recursivo)

    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    // Movimento do BISPO (recursivo + loops aninhados)

    printf("\nMovimento do Bispo:\n");
    moverBispo(casasBispo);

    // Movimento da RAINHA (recursivo)

    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    // Movimento do CAVALO (loops complexos)

    printf("\n");
    moverCavalo(movimentosCavalo);

    return 0;
}

