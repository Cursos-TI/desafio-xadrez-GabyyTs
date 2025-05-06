#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças

    printf("*** XADREZ - MOVIMENTANDO AS PEÇAS ***");

    //MOVIMENTAÇÃO DA TORRE - 5 CASAS PARA A DIREITA USANDO O WHILE
    int torre = 1;
    printf("\nMovimentação da TORRE!\n");
    while (torre <= 5) {
        printf("%d. Direita.\n", torre);
        torre++;
    }

    //MOVIMENTAÇÃO DO BISPO - 5 CASAS NA DIAGONAL PARA CIMA E À DIREITA USANDO O DO-WHILE
    int bispo = 1;
    printf("\nMovimentação do BISPO!\n");
    do {
        printf("%d. Diagonal: Cima, Direita.\n", bispo);
        bispo++;
    } while (bispo <= 5);
    
    //MOVIMENTAÇÃO DA RAINHA - 8 CASAS PARA A ESQUERDA USANDO O FOR
    int rainha;
    printf("\nMovimentação da RAINHA!\n");
    for (rainha = 1; rainha <=8; rainha++) {
        printf("%d. Esquerda.\n", rainha);
    }

    return 0;
}
