/*
** Fun��o : Utiliza a sequ�ncia de Fibonacci para calcular uma sequ�ncia a partir de um n�mero "n" informado pelo usu�rio.
** Autor : Jo�o Victor Barbosa Perazzo
** Data : 09/11/2023
** Observa��es:
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>
#define CONST 1.6180339887498

int main() {
  setlocale(LC_ALL, "Portuguese");

  float n;

  printf(" Digite um n�mero para gerar uma sequ�ncia de Fibonacci: ");
  scanf(" %f", &n);
  fflush(stdin);
  printf("\n");

  for (int i = 0; i <= n; i++) {
    float sequenciaN = (pow(CONST, i) - (pow(-CONST, -i))) / sqrt(5);
    printf(" %i� - %.0f\n", i, sequenciaN);
  }

  return 0;
}