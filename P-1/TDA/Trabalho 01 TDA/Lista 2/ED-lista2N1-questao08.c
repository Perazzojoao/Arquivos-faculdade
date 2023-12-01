/*
** Fun��o : Calcula os gastos com marca��o de frangos em uma granja
** Autor : Jo�o Victor Barbosa Perazzo - P1 Noite
** Data : 28/09/2023
** Observa��es:
*/

#include <stdio.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "");

  int frangos;

  printf(" Informe a quantidade de frangos: ");
  scanf("%i", &frangos);
  fflush(stdin);
  printf("\n");

  if (frangos <= 0)
  {
    printf(" Quantidade inv�lida!");
  }
  else
  {
    float anelDireito = 3.0, anelEsquerdo = 2.5;

    float gastoTotal = frangos * anelDireito * (anelEsquerdo * 2);

    printf(" Gasto total: R$%.2f", gastoTotal);
  }

  return 0;
}