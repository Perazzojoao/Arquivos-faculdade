/*
** Fun��o : Verifica se o n�mero informado � par ou �mpar.
** Autor : Jo�o Victor Barbosa Perazzo - P1 Noite
** Data : 28/09/2023
** Observa��es:
*/

#include <stdio.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "");

  int numero;

  printf(" Digite um n�mero inteiro: ");
  scanf(" %i", &numero);
  fflush(stdin);

  if (numero % 2 == 0)
  {
    printf(" O n�mero %i � par!", numero);
  }
  else
  {
    printf(" O n�mero %i � �mpar!", numero);
  }

  return 0;
}