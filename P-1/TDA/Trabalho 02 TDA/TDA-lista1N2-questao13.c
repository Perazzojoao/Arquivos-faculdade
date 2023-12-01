/*
** Fun��o : Calcular o valor inteiro da divis�o entre dois n�meros inteiros.
** Autor : Jo�o Victor Barbosa Perazzo
** Data : 13/11/2023
** Observa��es:
*/

#include <stdio.h>
#include <locale.h>

int controle = 0;

int quociente(int m, int n);

int main() {
  setlocale(LC_ALL, "Portuguese");

  int num1, num2;
  printf(" Digite dois n�meros inteiros\n");
  printf(" N�mero 1: ");
  scanf(" %i",&num1);
  fflush(stdin);
  printf(" N�mero 2: ");
  scanf(" %i",&num2);
  fflush(stdin);
  printf("\n");

  int resultado = quociente(num1, num2);

  printf(" O quociente da divis�o entre %i e %i � igual a %i", num1, num2, resultado);

  return 0;
}

int quociente(int m, int n) {
  if(m-n < 1) {
    return controle;
  } else {
    controle++;
    return quociente(m-n, n);
  }
}