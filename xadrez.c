#include <stdio.h>

int main() {
   
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n"); 
        //imprime o movimento da torre
    }
    printf("\n");

    
    printf("Movimento do Bispo:\n");
    int j = 0;
    while (j < 5) {
        printf("Cima, Direita\n");
        j++;
        //imprime o movimento do bispo
    }
    printf("\n");

    printf("Movimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
        //imprime o movimento da rainha 
    } while (k < 8);

    return 0;
}