#include <stdio.h>

    int main(){
//Declaração de variaveis
        int torre = 1;
        int rainha = 1;
        int bispo =1;

        //movimentação do bispo  
        printf("Movimentacao do bispo 5 casas diagonal superior direita\n");
        do
        {
            printf("1. Direita\n");
            printf("2. Esquerda\n");
            printf("3. Direita\n");
            printf("4. Esquerda\n");
            printf("5. Direita\n");                
            
            bispo--;
        } while (bispo >=5);

        
            // Movimentação da torre
             printf("\nMovimentacao da torre 5 casas para direita:\n");

        while (torre <=5)
        {
           
            printf("%d Direita\n", torre); //imprime direita 5 vezes
            
            torre++;

        }

        //Movimentação da rainha
        printf("\nMovimentacao da rainha 8 casas para esquerda\n");

        for (rainha = 1; rainha <= 8; rainha++)
        {
            printf("%d Esquerda\n",rainha); //imprime esquerda 8 vezes
        }
        
        //Movimentação do cavalho loops anhinhados
        printf("\nMovimento do cavalo\n");

        int cavalo =1;
        
        while (cavalo--)
        {
            for (int i = 0; i < 2; i++)
            {
                printf("Cima\n");
            }
            printf("Direita\n");
        }
        
        
    }

 
