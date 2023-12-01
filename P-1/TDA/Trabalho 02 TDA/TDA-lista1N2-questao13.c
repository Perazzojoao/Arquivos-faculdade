/*
** Função : Calcular o valor inteiro da divisão entre dois números inteiros.
** Autor : João Victor Barbosa Perazzo
** Data : 13/11/2023
** Observações:
*/

#include <stdio.h>
#include <locale.h>

int controle = 0;

int quociente(int m, int n);

int main() {
  setlocale(LC_ALL, "Portuguese");

  int num1, num2;
  printf(" Digite dois números inteiros\n");
  printf(" Número 1: ");
  scanf(" %i",&num1);
  fflush(stdin);
  printf(" Número 2: ");
  scanf(" %i",&num2);
  fflush(stdin);
  printf("\n");

  int resultado = quociente(num1, num2);

  printf(" O quociente da divisão entre %i e %i é igual a %i", num1, num2, resultado);

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