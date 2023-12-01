/*
** Fun��o : Calcula a posi��o e a velocidade final de um objeto.
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

  float s0, v0, a, t;

  printf(" Informe os dados abaixo:\n");
  printf(" Posi��o inicial: ");
  scanf("%f", &s0);
  fflush(stdin);
  printf(" Velocidade inicial: ");
  scanf("%f", &v0);
  fflush(stdin);
  printf(" Acelera��o: ");
  scanf("%f", &a);
  fflush(stdin);
  printf(" Instante: ");
  scanf("%f", &t);
  fflush(stdin);
  printf("\n");

  float s = (s0) + (v0 * t) + (a * pow(t, 2) / 2);
  float v = v0 + (a * t);

  printf(" A posi��o final �: %.2f\n", s);
  printf(" A velocidade final �: %.2f\n", v);

  return 0;
}