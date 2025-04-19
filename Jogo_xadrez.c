#include <stdio.h>

// Torre: movimenta recursivamente para a direita
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Bispo (recursivo): movimenta para cima e esquerda
void moverBispoRecursivo(int casas) {
    if (casas == 0) return;
    printf("Cima\n");
    printf("Esquerda\n");
    moverBispoRecursivo(casas - 1);
}

// Bispo (loops): com break e continue
void moverBispoLoops(int casas) {
    for (int i = 1; i <= casas; i++) {
        for (int j = 1; j <= casas; j++) {
            if (i != j) continue; // só se move se i == j (diagonal)
            if (i == 2) continue; // pula quando i == 2
            if (i == 3) break;    // para quando i == 3
            printf("Cima\n");
            printf("Direita\n");
        }
    }
}

// Rainha: esquerda com recursão
void moverRainhaEsquerda(int casas) {
    if (casas == 0) return;
    if (casas == 2) {
        moverRainhaEsquerda(casas - 1); // pula a casa 2
        return;
    }
    if (casas == 4) return; // evita a 4
    printf("Esquerda\n");
    moverRainhaEsquerda(casas - 1);
}

// Rainha: cima com recursão
void moverRainhaCima(int casas) {
    if (casas == 0) return;
    printf("Cima\n");
    moverRainhaCima(casas - 1);
}

// Cavalo: movimentos em L com loops aninhados
void moverCavaloComplexo() {
    for (int i = 1; i <= 2; i++) {
        printf("Cima\n");
        for (int j = 1; j <= 1; j++) {
            if (i == 2 && j == 1) {
                printf("Direita\n");
            }
        }
    }
}

int main() {
    // Cavalo
    printf("Cavalo:\n");
    moverCavaloComplexo();
    printf("\n");

    // Torre
    printf("Torre:\n");
    moverTorre(5);
    printf("\n");

    // Bispo
    printf("Bispo (Recursivo):\n");
    moverBispoRecursivo(3);
    printf("\n");

    printf("Bispo (Loops com break/continue):\n");
    moverBispoLoops(3);
    printf("\n");

    // Rainha
    printf("Rainha:\n");
    moverRainhaEsquerda(4);
    moverRainhaCima(3);
    printf("\n");

    return 0;
}
