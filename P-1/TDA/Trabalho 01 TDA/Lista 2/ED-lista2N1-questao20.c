/*
** Função : Converte uma temperatura em Celsius para Fahrenheit ou vice-versa.
** Autor : João Victor Barbosa Perazzo - P1 Noite
** Data : 28/09/2023
** Observações:
*/

#include <stdio.h>
#include <locale.h>

int ehValido(int opcao)
{
  if (opcao != 1 && opcao != 2)
    return 0;
  else
    return 1;
}

int main()
{
  setlocale(LC_ALL, "");

  float valor, resultado;
  int opcao;

  printf(" Conversões dispóníveis:\n");
  printf(" 1- Celsius -> Fahrenheit\n");
  printf(" 2- Fahrenheit -> Celsius\n\n");

  do
  {
    printf(" Escolha uma conversão: ");
    scanf(" %i", &opcao);
    fflush(stdin);
  } while (!ehValido(opcao));

  printf("\n Digite um valor: ");
  scanf(" %f", &valor);
  fflush(stdin);

  if (opcao == 1)
  {
    resultado = (valor * 9 / 5) + 32;
    printf(" %.2f° C = %.2f° F", valor, resultado);
  }
  else if (opcao == 2)
  {
    resultado = (valor - 32) * 5 / 9;
    printf(" %.2f° F = %.2f° C", valor, resultado);
  }

  return 0;
}