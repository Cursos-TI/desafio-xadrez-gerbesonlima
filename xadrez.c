#include <stdio.h>

int main() {
    // Declaração de variáveis
    int torre = 1;
    int rainha = 1;
    int bispo = 5;

    // Movimentação do Bispo
    printf("Movimentacao do bispo 5 casas diagonal superior direita\n");
    do {
        printf("1. Direita\n");
        printf("2. Esquerda\n");
        printf("3. Direita\n");
        printf("4. Esquerda\n");
        printf("5. Direita\n");
        bispo--;
    } while (bispo < 0);

    // Movimentação da Torre
    printf("\nMovimentacao da torre 5 casas para direita:\n");
    while (torre <= 5) {
        printf("%d Direita\n", torre);
        torre++;
    }

    // Movimentação da Rainha
    printf("\nMovimentacao da rainha 8 casas para esquerda\n");
    for (rainha = 1; rainha <= 8; rainha++) {
        printf("%d Esquerda\n", rainha);
    }

    return 0;
}
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

 
