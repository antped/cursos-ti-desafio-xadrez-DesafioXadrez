#include <stdio.h>

int main() {
    // ============================
    // Constantes das movimentações
    // ============================
    const int BISPO_MOV = 5;    // número de casas do bispo
    const int TORRE_MOV = 5;    // número de casas da torre
    const int RAINHA_MOV = 8;   // número de casas da rainha

    // ============================
    // BISPO - usando FOR
    // Movimento: diagonal superior direita (Cima + Direita)
    // ============================
    printf("Movimentacao do Bispo:\n");
    for(int i = 1; i <= BISPO_MOV; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }
    printf("-----------------------------\n");

    // ============================
    // TORRE - usando WHILE
    // Movimento: 5 casas para Direita
    // ============================
    printf("Movimentacao da Torre:\n");
    int t = 1;
    while(t <= TORRE_MOV) {
        printf("Direita\n");
        t++;
    }
    printf("-----------------------------\n");

    // ============================
    // RAINHA - usando DO...WHILE
    // Movimento: 8 casas para Esquerda
    // ============================
    printf("Movimentacao da Rainha:\n");
    int r = 1;
    do {
        printf("Esquerda\n");
        r++;
    } while(r <= RAINHA_MOV);
    printf("-----------------------------\n");

    return 0;
}
