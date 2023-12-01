/*
** Fun��o : Calcula as ra�ses de uma equa��o de 2� grau
** Autor : Jo�o Victor Barbosa Perazzo - P1 Noite
** Data : 28/09/2023
** Observa��es:
*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "");

  float A, B, C;

  printf(" Informe os seguintes dados:\n");
  printf(" Valor de a: ");
  scanf(" %f", &A);
  fflush(stdin);
  printf(" Valor de b: ");
  scanf(" %f", &B);
  fflush(stdin);
  printf(" Valor de c: ");
  scanf(" %f", &C);
  fflush(stdin);
  printf("\n");

  float x1, x2;
  float delta = (B * B) - (4 * A * C);

  x1 = (-B + sqrtf(delta)) / 2 * A;
  x2 = (-B - sqrtf(delta)) / 2 * A;

  if (delta < 0)
  {
    printf(" Delta � menor que 0. A equa��o n�o tem solu��o real!");
  }
  else if (delta == 0)
  {
    printf(" Delta � igual a 0. Sendo assim a equa��o poss�i apenas uma raiz: ");
    printf(" x = %.2f", x1);
  }
  else
  {
    printf(" Delta � maior que 0, logo, a equa��o poss�i duas ra�zes reais:");
    printf(" x1 = %.2f e x2 = %.2f", x1, x2);
  }

  return 0;
}