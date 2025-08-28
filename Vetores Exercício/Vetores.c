#include <stdio.h>

#define TAM 30

int main() {
    float nota1[TAM], nota2[TAM], media[TAM];
    float SomaMed = 0, MedTurma;
    int i;

    printf("Digita as nota dos %d aluno aí pae:\n", TAM);
    for (i = 0; i < TAM; i++) { 
        // i++ é tipo o i + 1 só que melhor?????????????????
        printf("Aluno %d:\n", i + 1);
        printf("  Nota 1: ");
        scanf("%f", &nota1[i]);
        // eu esuqeci do [i] um bilhão de vezes pq eu sou idiotaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa

        printf("  Nota 2: ");
        scanf("%f", &nota2[i]);

        media[i] = (nota1[i] * 2 + nota2[i] * 3) / 5.0;

        SomaMed += media[i];
    }

    MedTurma = SomaMed / TAM;

    printf("\nA média da turma ficou: %.2f\n", MedTurma);

    printf("\nOs aluno com a média acima da média da turma (nerds otários) foram:\n");
    for (i = 0; i < TAM; i++) {
        if (media[i] > MedTurma) {
            printf("Aluno %d: Nota1 = %.2f, Nota2 = %.2f, Média = %.2f\n",
                   i + 1, nota1[i], nota2[i], media[i]);
                   printf("Parabéns nerds otários.\n");
        }
    }

    return 0;
}