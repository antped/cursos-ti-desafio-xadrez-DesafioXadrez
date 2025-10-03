#include <stdio.h>

// ================================
// Constantes para movimentação
// ================================
const int BISPO_MOV_VERTICAL = 5;    // casas para o Bispo verticalmente
const int BISPO_MOV_HORIZONTAL = 5;  // casas para o Bispo horizontalmente
const int TORRE_MOV = 5;             // casas para a Torre
const int RAINHA_MOV = 8;            // casas para a Rainha
const int CAVALO_VERTICAL = 2;       // casas para cima
const int CAVALO_HORIZONTAL = 1;     // casas para direita

// ================================
// Funções Recursivas
// ================================

// Movimento recursivo da Torre: apenas para a direita
void moverTorreRecursivo(int casas) {
    if (casas == 0) return; // caso base
    printf("Direita\n");
    moverTorreRecursivo(casas - 1);
}

// Movimento recursivo da Rainha: apenas para a esquerda
void moverRainhaRecursivo(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainhaRecursivo(casas - 1);
}

// Movimento do Bispo usando recursividade e loops aninhados
void moverBispoRecursivoLoops(int vertical, int horizontal) {
    if (vertical == 0) return; // caso base da recursão vertical

    // Loop interno: movimento horizontal
    for (int h = 0; h < horizontal; h++) {
        printf("Direita\n");
    }
    printf("Cima\n"); // movimento vertical após mover horizontalmente

    // chamada recursiva para a próxima linha vertical
    moverBispoRecursivoLoops(vertical - 1, horizontal);
}

// ================================
// Função principal
// ================================
int main() {

    // ================================
    // MOVIMENTAÇÃO DO BISPO
    // ================================
    printf("Movimentacao do Bispo:\n");
    moverBispoRecursivoLoops(BISPO_MOV_VERTICAL, BISPO_MOV_HORIZONTAL);
    printf("\n-----------------------------\n");

    // ================================
    // MOVIMENTAÇÃO DA TORRE
    // ================================
    printf("Movimentacao da Torre:\n");
    moverTorreRecursivo(TORRE_MOV);
    printf("\n-----------------------------\n");

    // ================================
    // MOVIMENTAÇÃO DA RAINHA
    // ================================
    printf("Movimentacao da Rainha:\n");
    moverRainhaRecursivo(RAINHA_MOV);
    printf("\n-----------------------------\n");

    // ================================
    // MOVIMENTAÇÃO DO CAVALO (avançado)
    // ================================
    printf("Movimentacao do Cavalo:\n");

    // Loop externo controla o movimento vertical (cima)
    for (int v = 1; v <= CAVALO_VERTICAL; v++) {
        printf("Cima\n");

        // Loop interno controla a movimentação horizontal (direita)
        // Só executa após o cavalo completar as 2 casas para cima
        int h = 1;
        while (h <= CAVALO_HORIZONTAL) {
            if (v < CAVALO_VERTICAL) {
                // enquanto não estiver na última casa vertical, pula o horizontal
                h++;
                continue;
            }
            printf("Direita\n");
            h++;
        }

        // Exemplo de uso do break: finaliza se já fez a movimentação completa
        if (v == CAVALO_VERTICAL) break;
    }

    printf("\n-----------------------------\n");

    return 0;
}
