/*
** Função : Recebe 3 números inteiros e retorna o maior deles.
** Autor : João Victor Barbosa Perazzo - P1 Noite
** Data : 28/09/2023
** Observações:
*/

#include <stdio.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "");

  int numero[3];

  printf(" Digite as informações abaixo:\n");

  for (int i = 0; i < 3; i++)
  {
    printf(" Número %i (inteiro): ", i + 1);
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

  printf(" O maior número é: %i", maior);

  return 0;
}