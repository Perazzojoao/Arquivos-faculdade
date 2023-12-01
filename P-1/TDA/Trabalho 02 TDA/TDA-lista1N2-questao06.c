/*
** Função : Utiliza a sequência de Fibonacci para calcular uma sequência a partir de um número "n" informado pelo usuário.
** Autor : João Victor Barbosa Perazzo
** Data : 09/11/2023
** Observações:
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>
#define CONST 1.6180339887498

int main() {
  setlocale(LC_ALL, "Portuguese");

  float n;

  printf(" Digite um número para gerar uma sequência de Fibonacci: ");
  scanf(" %f", &n);
  fflush(stdin);
  printf("\n");

  for (int i = 0; i <= n; i++) {
    float sequenciaN = (pow(CONST, i) - (pow(-CONST, -i))) / sqrt(5);
    printf(" %i° - %.0f\n", i, sequenciaN);
  }

  return 0;
}