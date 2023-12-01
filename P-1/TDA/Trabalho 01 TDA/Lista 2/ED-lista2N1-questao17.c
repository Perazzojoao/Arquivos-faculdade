/*
** Função : Verifica se o número informado é par ou ímpar.
** Autor : João Victor Barbosa Perazzo - P1 Noite
** Data : 28/09/2023
** Observações:
*/

#include <stdio.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "");

  int numero;

  printf(" Digite um número inteiro: ");
  scanf(" %i", &numero);
  fflush(stdin);

  if (numero % 2 == 0)
  {
    printf(" O número %i é par!", numero);
  }
  else
  {
    printf(" O número %i é ímpar!", numero);
  }

  return 0;
}