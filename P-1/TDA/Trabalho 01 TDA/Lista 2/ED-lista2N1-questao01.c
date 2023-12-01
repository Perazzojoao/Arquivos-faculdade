/*
** Função :
** Autor : João Victor Barbosa Perazzo - P1 Noite
** Data : 28/09/2023
** Observações: Resultado = 0 -> falso. Resultado = 1 -> verdadeiro
*/

#include <stdio.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "");

  int fatorial = 1;
  for (int i = 2; i <= 5; i++)
  {
    fatorial *= i;
  }

  float A = 2 + 3 - 5 * 8 / 4;
  float B = 7 * 4 / 2 + 9 - 6;
  float C = (4 / 2) / 0.5 * (4 % 2) * 0.5;
  float D = 7 > 2 && 3 - 5 < 8;
  float E = !(3 + fatorial == 1.5);
  float F = 7 % 3 - 8 + 4 / 2;
  float G = 6 / 3 - 3 * 4 % 2;
  float H = 10 > 11 && 11 < 12;
  float I = 9 / 3 + 9 % 3 + 9 * 3;
  float J = 1 + 2 + 3 / 2;

  float respostas[10] = {A, B, C, D, E, F, G, H, I, J};

  for (int i = 0; i < 10; i++)
  {
    printf(" O resultado da expressão %i é: %.2f\n", i + 1, respostas[i]);
  }

  return 0;
}