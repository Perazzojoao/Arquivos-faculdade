/*
** Função : Calcula as raíses de uma equação de 2° grau
** Autor : João Victor Barbosa Perazzo - P1 Noite
** Data : 28/09/2023
** Observações:
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
    printf(" Delta é menor que 0. A equação não tem solução real!");
  }
  else if (delta == 0)
  {
    printf(" Delta é igual a 0. Sendo assim a equação possúi apenas uma raiz: ");
    printf(" x = %.2f", x1);
  }
  else
  {
    printf(" Delta é maior que 0, logo, a equação possúi duas raízes reais:");
    printf(" x1 = %.2f e x2 = %.2f", x1, x2);
  }

  return 0;
}