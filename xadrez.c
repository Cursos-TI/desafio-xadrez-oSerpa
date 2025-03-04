// Desafio Novato

#include <stdio.h>

int main(){

    //torre

    printf("\nTorre -\n");

    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }
    
    // bispo

    printf("\nBispo -\n");

    int j = 0;

    do {
        printf("Cima, Direita\n");
        j++;
    } while (j < 5);
    
    // rainha

    printf("\nRainha -\n");

    int k = 0;

    while (k < 8) {
        printf("Esquerda\n");
        k++;
    }
    

    return 0;
}