#include <stdio.h>

//MOVIMENTAÇÃO DA TORRE - 5 CASAS PARA A DIREITA
void Torre(int casas) {
    if (casas > 0) {
        printf("Direita.\n");
        Torre(casas - 1);
    }
}

//MOVIMENTAÇÃO DO BISPO - 5 CASAS NA DIAGONAL PARA CIMA E À DIREITA
void Bispo(int casas) {
    if (casas <= 0) return;
    int bispo = 1;
    int i;
    while (bispo--) {
        for (i = 0; i < 1; i++) {
            printf("Cima, ");
        }
        printf("Direita.\n");
    }
    Bispo(casas - 1);
}

//MOVIMENTAÇÃO DA RAINHA - 8 CASAS PARA A ESQUERDA
void Rainha(int casas) {
    if (casas > 0) {
        printf("Esquerda.\n");
        Rainha(casas - 1);
    }
}

int main() {

    printf("*** XADREZ - MOVIMENTANDO AS PEÇAS ***\n");

    printf("\nMovimentação do TORRE!\n");
    Torre(5);

    printf("\nMovimentação do BISPO!\n");
    Bispo(5);

    printf("\nMovimentação do RAINHA!\n");
    Rainha(8);

    //MOVIMENTAÇÃO DO CAVALO - 2 CASAS PARA BAIXO E 1 CASA PARA A ESQUERDA USANDO LOOPS COMPLEXOS
    printf("\nMovimentação do CAVALO!\n");
    for (int cavalo = 1, i = 0; cavalo > i; cavalo--, i++) {
        printf("Cima, cima, direita.\n");
    }

    return 0;
}