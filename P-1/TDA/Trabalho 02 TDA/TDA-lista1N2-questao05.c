/*
** Função : Mostra o capital acumulado ao usuário
** Autor : João Victor Barbosa Perazzo
** Data : 09/11/2023
** Observações:
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int anos;
  float capitalInicial, jurosAA;

  printf(" Digite as informações abaixo:\n");
  printf(" Capital inicial: ");
  scanf("%f", &capitalInicial);
  fflush(stdin);
  printf(" Juros ao ano (%%): ");
  scanf("%f", &jurosAA);
  fflush(stdin);
  printf(" Anos de rendimento: ");
  scanf("%i", &anos);
  fflush(stdin);
  printf("\n");

  float montante = capitalInicial *  pow((1 + (jurosAA/100)), (float) anos);

  printf(" O montante ao final de %i anos será de R$%.2f", anos, montante);

  return 0;
}