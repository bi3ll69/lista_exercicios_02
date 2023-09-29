#include <stdio.h>

int main() {
    int N;
    
    // Lê o valor inteiro N
    scanf("%d", &N);

    // Verifica se N está no intervalo especificado
    if (N > 2 && N < 1000) {
        // Loop para imprimir a tabuada de N de 1 a 10
        for (int i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", i, N, i * N);
        }
    }

    return 0;
}
