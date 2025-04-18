#include <stdio.h>

int main() {
    int opcao;

    // Menu para o usuário escolher o movimento do Cavalo
    printf("Escolha o movimento do Cavalo:\n");
    printf("1 - Duas casas para baixo e uma para a esquerda\n");
    printf("2 - Duas casas para cima e uma para a direita\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);

    printf("\n");

    if (opcao == 1) {
        // Movimento 1: Baixo, Baixo, Esquerda
        for (int i = 0; i < 2; i++) {
            printf("Cavalo -- Baixo\n");
        }
        int esquerda = 1;
        while (esquerda--) {
            printf("Cavalo <-- Esquerda\n");
        }
    } else if (opcao == 2) {
        // Movimento 2: Cima, Cima, Direita
        for (int i = 0; i < 2; i++) {
            printf("Cavalo -- Cima\n");
        }
        int direita = 1;
        while (direita--) {
            printf("Cavalo --> Direita\n");
        }
    } else {
        printf("Opção inválida.\n");
    }

    printf("\n");

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
