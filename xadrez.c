// Desafio Mestre

#include <stdio.h>

// Mover torre

void moverTorre(int casa){
    if (casa > 0) {
        printf("Direita\n");
        moverTorre(casa - 1);
    }
}

// Mover rainha

void moverRainha(int casa){
    if (casa > 0) {
        printf("Esquerda\n");
        moverRainha(casa - 1);
    }
}

// Mover bispo

void moverBispo(int casa){
    int Bispo;
    int j = 0;

    for (int i = 0; i < 5; i++) {
        
        do {
           printf("Cima\n"); 
           j++;
        } while (j < i);
        
        printf("Direita\n");
    }
    
    
}

// Mover cavalo

void moverCavalo(int casa){
    for (int i = 0; i < 1; i++) {
        int j = 0;
        while (j < 2) {
            printf("Cima\n");
            j++;
        }
        printf("Direita\n");
    }
    
}

int main(){

    int movTorre = 5;
    int movRainha = 8;
    int movBispo = 5;
    int movCavalo = 1;

    printf("\nTorre -\n");

    moverTorre(movTorre);

    printf("\nRainha -\n");

    moverRainha(movRainha);

    printf("\nBispo -\n");

    moverBispo(movBispo);

    printf("\nCavalo -\n");

    moverCavalo(movCavalo);

    return 0;
}