#include <stdio.h>

int main() {
    int X, Y;
    int soma = 0;
    
    // Lê os dois valores inteiros
    scanf("%d %d", &X, &Y);

    // Certifica-se de que X seja menor que Y, caso contrário, troca os valores
    if (X > Y) {
        int temp = X;
        X = Y;
        Y = temp;
    }

    // Loop para somar os números ímpares entre X e Y
    for (int i = X + 1; i < Y; i++) {
        if (i % 2 != 0) {
            soma += i;
        }
    }

    // Imprime a soma dos ímpares
    printf("%d\n", soma);

    return 0;
}