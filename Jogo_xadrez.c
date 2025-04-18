#include <stdio.h>

int main() {
    // Torre: Direita
    for (int torre = 0; torre < 5; torre++) {
        printf("Torre --> Direita\n");
    }

    // Bispo: Cima e Esquerda
    int bispo = 1;
    char direcao[] = "Cima e Esquerda";

    while (bispo <= 10) {
        printf("Bispo <-- %s\n", direcao);
        bispo++;
    }

    // Rainha: Esquerda
    int rainha = 1;
    char rainhaDirecao[] = "8 casas para Esquerda";

    do {
        printf("Rainha <-- %s\n", rainhaDirecao);
        rainha++;
    } while (rainha <= 8);

return 0;
} 