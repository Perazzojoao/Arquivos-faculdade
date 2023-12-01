/*
** Fun��o : Verifica se um n�mero � par ou �mpar e, depois, informa quais n�meros s?o pares e quais s?o �mpares em sequ�ncia.
** Autor : Jo�o Victor Barbosa Perazzo
** Data : 09/11/2023
** Observa��es: 
*/

#include <stdio.h>
#include <locale.h>

int ehPar(int);

int main() {
  setlocale(LC_ALL, "Portuguese");

  int num;

  printf(" Digite um n�mero inteiro: ");
  scanf("%i", &num);
  fflush(stdin);

  if (!ehPar(num))
  {
    printf(" %i � par!", num);
  }
  else
  {
    printf(" %i � �mpar!", num);
  }

  printf("\n\n");

  for (int i = 1; i <= num; i++) {
    printf(" %i", i);

    if (!ehPar(i))
    {
      printf(" � par.\n");
    }
    else
    {
      printf(" � �mpar.\n");
    }
  }

  return 0;
}

int ehPar(int num) {
  return num % 2;
}