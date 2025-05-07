#include <stdio.h>

int main() {

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

    for (rainha = 1; rainha <= 8; rainha++) {
        printf("%d. Esquerda.\n", rainha);
    }

    //MOVIMENTAÇÃO DO CAVALO - 2 CASAS PARA BAIXO E 1 CASA PARA A ESQUERDA USANDO LOOPS ANINHADOS (WHILE E FOR)
    int cavalo = 1;
    int i;

    printf("\nMovimentação do CAVALO!\n");

    while (cavalo--) {
        for (i = 0; i < 2; i++) {
            printf("Baixo, ");
        }
        printf("Esquerda.\n");
    }

    return 0;
}