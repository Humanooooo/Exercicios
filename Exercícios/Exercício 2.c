#include <stdio.h>

int main() {
    float altura, peso, imc;

    printf("Eai rapá, vamo calcular teu imc?\nQual tua altura?");
    scanf("%f", &altura);

    printf("Fala teu peso aí agora mané");
    scanf("%f", &peso);

    imc = altura / (peso * altura);
    printf (imc);

    return 0;
}