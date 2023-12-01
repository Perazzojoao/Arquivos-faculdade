/*
** Função : Calculadora básica
** Autor : João Victor Barbosa Perazzo - P1 Noite
** Data : 28/09/2023
** Observações:
*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "");

  printf("-- MINI CALCULADORA --\n");

  printf(" Operações permitidas:\n");
  printf(" Soma (+)\n");
  printf(" Subtração (-)\n");
  printf(" Multiplicação (*)\n");
  printf(" Divisão (/)\n");
  printf(" Potenciação (^)\n");

  float A, B, resultado;
  char C;
  int valido;

  do
  {
    printf("\n Digite o primeiro número:\n");
    scanf("%f", &A);
    fflush(stdin);
    printf(" Digite um operador disponível:\n");
    scanf("%c", &C);
    fflush(stdin);
    printf(" Digite o segundo número:\n");
    scanf("%f", &B);
    fflush(stdin);

    valido = 1;

    switch (C)
    {
    case '+':
      resultado = A + B;
      break;
    case '-':
      resultado = A - B;
      break;
    case '*':
      resultado = A * B;
      break;
    case '/':
      if (B == 0)
      {
        printf(" Erro de divisão por 0! Tente novamente.\n");
        valido = 0;
        break;
      }
      resultado = A / B;
      break;
    case '^':
      resultado = pow(A, B);
      break;

    default:
      printf(" Operador inválido! Tente novamente.\n");
      valido = 0;
      break;
    }
  } while (!valido);

  printf(" O resultado da expressão é: %.2f %c %.2f = %.2f", A, C, B, resultado);

  return 0;
}