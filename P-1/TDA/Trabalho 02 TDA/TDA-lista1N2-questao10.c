/*
** Fun��o : Fun��o para elevar um n�mero a outro de forma recursiva.
** Autor : Jo�o Victor Barbosa Perazzo
** Data : 13/11/2023
** Observa��es:
*/

#include <stdio.h>
#include <locale.h>

float pot(float, int);

int main() {
  setlocale(LC_ALL, "Portuguese");

  float base;
  int expoente;

  printf(" Digite um n�mero: ");
  scanf(" %f", &base);
  fflush(stdin);
  printf(" Digite o expoente da pot�ncia: ");
  scanf(" %i", &expoente);
  fflush(stdin);
  printf("\n");

  float resultado = pot(base, expoente);

  printf(" %.2f elevado a %i � igual a %.2f", base, expoente, resultado);

  return 0;
}

float pot(float base, int expoente) {
  if (expoente == 0) {
    return 1;
  } else if (expoente > 0){
    return (pot(base, expoente - 1) * base);
  }
}