#include <stdio.h>

int main() {
  double salario, salarioContribuido;

  printf("Digite seu salário:\n");
  scanf("%lf", &salario);

  if (salario <= 8157.41) {
    salarioContribuido = salario;
  } else {
    salarioContribuido = 8157.41;
  }

  printf("salario = %f\n", salario);
  printf("salario-contribuição = %f\n", salarioContribuido);

  if (salarioContribuido <= 1518) {
    printf("Percentual = 7,5%% - desconto = %f\n", salarioContribuido * 0.075);
  } else if (salarioContribuido <= 2793.88) {
    printf("Percentual = 9%% - desconto = %f\n", salarioContribuido * 0.09);
  } else if (salarioContribuido <= 4190.83) {
    printf("Percentual = 12%% - desconto = %f\n", salarioContribuido * 0.12);
  } else {
    printf("Percentual = 14%% - desconto = %f\n", salarioContribuido * 0.14);
  }

  return 0;
}