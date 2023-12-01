/*
** Fun��o : Calculadora b�sica
** Autor : Jo�o Victor Barbosa Perazzo - P1 Noite
** Data : 28/09/2023
** Observa��es:
*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "");

  printf("-- MINI CALCULADORA --\n");

  printf(" Opera��es permitidas:\n");
  printf(" Soma (+)\n");
  printf(" Subtra��o (-)\n");
  printf(" Multiplica��o (*)\n");
  printf(" Divis�o (/)\n");
  printf(" Potencia��o (^)\n");

  float A, B, resultado;
  char C;
  int valido;

  do
  {
    printf("\n Digite o primeiro n�mero:\n");
    scanf("%f", &A);
    fflush(stdin);
    printf(" Digite um operador dispon�vel:\n");
    scanf("%c", &C);
    fflush(stdin);
    printf(" Digite o segundo n�mero:\n");
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
        printf(" Erro de divis�o por 0! Tente novamente.\n");
        valido = 0;
        break;
      }
      resultado = A / B;
      break;
    case '^':
      resultado = pow(A, B);
      break;

    default:
      printf(" Operador inv�lido! Tente novamente.\n");
      valido = 0;
      break;
    }
  } while (!valido);

  printf(" O resultado da express�o �: %.2f %c %.2f = %.2f", A, C, B, resultado);

  return 0;
}