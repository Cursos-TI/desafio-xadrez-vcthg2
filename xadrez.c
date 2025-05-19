#include <stdio.h>

void moverTorre(int passo) {
    if (passo > 5) return;
    printf("Casa %d: Direita\n", passo);
    moverTorre(passo + 1);
}

void moverRainha(int passo) {
    if (passo > 8) return;
    printf("Casa %d: Esquerda\n", passo);
    moverRainha(passo + 1);
}

void moverBispo(int passo) {
    if (passo > 5) return;
    for (int i = 0; i < 1; i++) {
        printf("Casa %d: Cima, Direita\n", passo);
    }
    moverBispo(passo + 1);
}

void moverCavalo() {
    int direcao;
    printf("Escolha a direção do cavalo:\n1 - Direita\n2 - Esquerda\n");
    scanf("%d", &direcao);
    
    for (int i = 1; i <= 2; i++) {
        printf("Etapa %d: Cima\n", i);
        if (i == 2) {
            int j = 1;
            while (j <= 1) {
                if (direcao == 1) {
                    printf("Etapa %d: Direita\n", i + j);
                } else if (direcao == 2) {
                    printf("Etapa %d: Esquerda\n", i + j);
                } else {
                    printf("Opção errada! Tente Novamente...\n");
                }
                j++;
            }
        }
    }
}

int main() {
    printf("### Movimentação Jogo de Xadrez ###\n\n");

    printf("Movimento da Torre:\n");
    moverTorre(1);

    printf("\nMovimento do Bispo:\n");
    moverBispo(1);

    printf("\nMovimento da Rainha:\n");
    moverRainha(1);

    printf("\nMovimento do Cavalo:\n");
    moverCavalo();

    return 0;

    
}