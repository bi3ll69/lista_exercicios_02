#include <stdio.h>

int main() {
    int T; // Tipo de chá real
    int A, B, C, D, E; // Respostas dos competidores
    int acertos = 0; // Contador de acertos

    // Lê o tipo de chá real
    scanf("%d", &T);

    // Lê as respostas dos competidores
    scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);

    // Verifica se cada competidor acertou
    if (A == T) {
        acertos++;
    }
    if (B == T) {
        acertos++;
    }
    if (C == T) {
        acertos++;
    }
    if (D == T) {
        acertos++;
    }
    if (E == T) {
        acertos++;
    }

    // Imprime o número de competidores que acertaram
    printf("%d\n", acertos);

    return 0;
}
