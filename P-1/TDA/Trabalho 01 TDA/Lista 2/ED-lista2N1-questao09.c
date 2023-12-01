/*
** Função : Informa quantos % um número é maior que outro.
** Autor : João Victor Barbosa Perazzo - P1 Noite
** Data : 28/09/2023
** Observações:
*/

#include <stdio.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "");

  int n1, n2;

  printf(" Digite as informações abaixo:\n");
  printf(" Número 1: ");
  scanf("%i", &n1);
  fflush(stdin);
  printf(" Número 2: ");
  scanf("%i", &n2);
  fflush(stdin);
  printf("\n");

  float resultado;

  if (n1 > n2)
  {
    resultado = (((float)n1 - (float)n2) / (float)n1) * 100;
    printf(" O número %i é %.2f %% maior que %i", n1, resultado, n2);
  }
  else if (n1 == n2)
  {
    resultado = 0;
  }
  else
  {
    resultado = (((float)n2 - (float)n1) / (float)n2) * 100;
    printf(" O número %i é %.2f %% maior que %i", n2, resultado, n1);
  }

  return 0;
}