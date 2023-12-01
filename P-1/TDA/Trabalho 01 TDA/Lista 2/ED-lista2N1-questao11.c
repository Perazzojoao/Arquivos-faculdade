/*
** Função :
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
  int medio = 0;

  for (int i = 0; i < 3; i++)
  {
    if (numero[i] > maior)
    {
      maior = numero[i];
    }
  }

  int menor = maior;

  for (int i = 0; i < 3; i++)
  {
    if (numero[i] < menor)
    {
      menor = numero[i];
    }
  }

  for (int i = 0; i < 3; i++)
  {
    if (numero[i] >= menor && numero[i] <= maior)
    {
      medio = numero[i];
    }
  }

  printf(" Números em ordem crescente: %i, %i, %i.", menor, medio, maior);

  return 0;
}