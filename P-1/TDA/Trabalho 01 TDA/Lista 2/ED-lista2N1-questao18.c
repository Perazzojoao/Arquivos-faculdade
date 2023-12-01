/*
** Fun��o : Determina se um determinado ano lido � bissexto.
** Autor : Jo�o Victor Barbosa Perazzo - P1 Noite
** Data : 28/09/2023
** Observa��es:
*/

#include <stdio.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "");

  int ano;

  printf(" Digite um ano: ");
  scanf(" %i", &ano);
  fflush(stdin);

  if ((ano % 400 == 0) || ((ano % 4 == 0) && (ano % 100 != 0)))
  {
    printf(" O ano %i � bissexto!", ano);
  }
  else
    printf(" O ano %i n�o � bissexto!", ano);

  return 0;
}