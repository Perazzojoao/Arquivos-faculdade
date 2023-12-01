/*
** Função : Determina se um determinado ano lido é bissexto.
** Autor : João Victor Barbosa Perazzo - P1 Noite
** Data : 28/09/2023
** Observações:
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
    printf(" O ano %i é bissexto!", ano);
  }
  else
    printf(" O ano %i não é bissexto!", ano);

  return 0;
}