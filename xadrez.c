#include <stdio.h>

// Função recursiva para movimentação da torre
void moverTorre(int casas) {
    if (casas > 0) {
        moverTorre(casas - 1);
        printf("%d Direita\n", casas);
        
    }
}

// Função recursiva para movimentação da rainha
void moverRainha(int casas) {
    if (casas > 0) {

        moverRainha(casas - 1);
        printf("%d Esquerda\n", casas);
        
    }
}


// Função recursiva para movimentação do bispo
void moverbispo(int casas) {
    if (casas > 0) {
        for (int i = 0; i < 1; i++) {

            for (int j = 0; j < 1; j++) {
                
                moverbispo(casas - 1);

                printf("%d Cima ",casas);
            }
            printf("Direita\n");
        }
        
    }
}

// Função para movimentação do cavalo
void moverCavalo(int movimentos) {
    for (int i = 0; i < movimentos; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Cima");
        }
        printf("Direita\n");
    }
}

int main() {
    // Movimentação do bispo
    printf("Movimentacao do bispo 5 casas na diagonal para cima e à direita:\n");
    moverbispo(5);


    // Movimentação da torre
    printf("\nMovimentacao da torre 5 casas para direita:\n");
    moverTorre(5);

    // Movimentação da rainha
    printf("\nMovimentacao da rainha 8 casas para esquerda\n");
    moverRainha(8);

    // Movimentação do cavalo
    printf("\nMovimento do cavalo\n");
    moverCavalo(1);

    return 0;
}