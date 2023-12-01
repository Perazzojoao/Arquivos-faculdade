/*
** Fun��o : Recebe 3 n�meros inteiros e retorna o maior deles.
** Autor : Jo�o Victor Barbosa Perazzo - P1 Noite
** Data : 28/09/2023
** Observa��es:
*/

#include <stdio.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "");

  int numero[3];

  printf(" Digite as informa��es abaixo:\n");

  for (int i = 0; i < 3; i++)
  {
    printf(" N�mero %i (inteiro): ", i + 1);
    scanf("%i", &numero[i]);
    fflush(stdin);
  }
  printf("\n");

  int maior = 0;

  for (int i = 0; i < 3; i++)
  {
    if (numero[i] > maior)
    {
      maior = numero[i];
    }
  }

  printf(" O maior n�mero �: %i", maior);

  return 0;
}