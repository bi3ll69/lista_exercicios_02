#include <stdio.h>

int main() {
    int N;
    
    scanf("%d", &N);

    int inicio = 1;
    
    for (int i = 0; i < N; i++) {
        printf("%d %d %d PUM\n", inicio, inicio + 1, inicio + 2);
        inicio += 4;
    }

    return 0;
}