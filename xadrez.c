#include <stdio.h>

int main() {
    // ============================
    // Constantes das movimentações
    // ============================
    const int BISPO_MOV = 5;      // número de casas do Bispo
    const int TORRE_MOV = 5;      // número de casas da Torre
    const int RAINHA_MOV = 8;     // número de casas da Rainha
    const int CAVALO_BAIXO = 2;   // número de casas para baixo
    const int CAVALO_ESQ = 1;     // número de casas para a esquerda

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

    // ============================
    // CAVALO - usando loops aninhados
    // Movimento: 2 casas para Baixo e 1 casa para Esquerda
    // ============================
    printf("\nMovimentacao do Cavalo:\n");

    // Loop externo (for) → controla as 2 casas para baixo
    for (int i = 1; i <= CAVALO_BAIXO; i++) {
        printf("Baixo\n");

        // Loop interno (while) → quando chegar na última casa para baixo,
        // faz a movimentação de 1 casa para a esquerda
        int j = 1;
        while (j <= CAVALO_ESQ && i == CAVALO_BAIXO) {
            printf("Esquerda\n");
            j++;
        }
    }

    printf("-----------------------------\n");

    return 0;
}
