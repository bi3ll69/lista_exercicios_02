#include <stdio.h>

int main() {
    double N1, N2, N3, N4, media, exame;

    // Lê as quatro notas
    scanf("%lf %lf %lf %lf", &N1, &N2, &N3, &N4);

    // Calcula a média ponderada
    media = (N1 * 2 + N2 * 3 + N3 * 4 + N4 * 1) / 10;

    // Imprime a média com uma casa decimal
    printf("Media: %.1lf\n", media);

    // Verifica a situação do aluno
    if (media >= 7.0) {
        printf("Aluno aprovado.\n");
    } else if (media < 5.0) {
        printf("Aluno reprovado.\n");
    } else {
        printf("Aluno em exame.\n");
        // Se o aluno estiver em exame, leia a nota do exame
        scanf("%lf", &exame);
        printf("Nota do exame: %.1lf\n", exame);
        // Recalcula a média com o exame
        media = (media + exame) / 2;
        // Verifica se o aluno foi aprovado ou reprovado após o exame
        if (media >= 5.0) {
            printf("Aluno aprovado.\n");
        } else {
            printf("Aluno reprovado.\n");
        }
        // Imprime a média final com uma casa decimal
        printf("Media final: %.1lf\n", media);
    }

    return 0;
}
