/*
** Fun��o : Calcula o valor de uma aproxima��o do n�mero pi.
** Autor : Jo�o Victor Barbosa Perazzo
** Data : 09/11/2023
** Observa��es:
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

double pi_aprox(int n);

int main() {
  setlocale(LC_ALL, "Portuguese");

  int n;

  printf(" Digite a aproxima��o desejada para pi: ");
  scanf("%i", &n);
  fflush(stdin);
  printf("\n");

  double pi = pi_aprox(n);

  printf(" O valor aproximado de pi � igual a %.11lg", pi);

  return 0;
}

double pi_aprox(int n) {
  double somatorio = 0;

  for (int i = 0; i <= n; i++) {
    somatorio = somatorio + (pow(-1, i) / ((2 * i) + 1));
  }
  return 4*somatorio;
}