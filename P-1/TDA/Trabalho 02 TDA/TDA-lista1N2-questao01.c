/*
** Função : Verifica se um número é par ou ímpar e, depois, informa quais números s?o pares e quais s?o ímpares em sequência.
** Autor : João Victor Barbosa Perazzo
** Data : 09/11/2023
** Observações: 
*/

#include <stdio.h>
#include <locale.h>

int ehPar(int);

int main() {
  setlocale(LC_ALL, "Portuguese");

  int num;

  printf(" Digite um número inteiro: ");
  scanf("%i", &num);
  fflush(stdin);

  if (!ehPar(num))
  {
    printf(" %i é par!", num);
  }
  else
  {
    printf(" %i é ímpar!", num);
  }

  printf("\n\n");

  for (int i = 1; i <= num; i++) {
    printf(" %i", i);

    if (!ehPar(i))
    {
      printf(" é par.\n");
    }
    else
    {
      printf(" é ímpar.\n");
    }
  }

  return 0;
}

int ehPar(int num) {
  return num % 2;
}