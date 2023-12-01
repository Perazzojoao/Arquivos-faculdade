/*
** Função : Função para elevar um número a outro de forma recursiva.
** Autor : João Victor Barbosa Perazzo
** Data : 13/11/2023
** Observações:
*/

#include <stdio.h>
#include <locale.h>

float pot(float, int);

int main() {
  setlocale(LC_ALL, "Portuguese");

  float base;
  int expoente;

  printf(" Digite um número: ");
  scanf(" %f", &base);
  fflush(stdin);
  printf(" Digite o expoente da potência: ");
  scanf(" %i", &expoente);
  fflush(stdin);
  printf("\n");

  float resultado = pot(base, expoente);

  printf(" %.2f elevado a %i é igual a %.2f", base, expoente, resultado);

  return 0;
}

float pot(float base, int expoente) {
  if (expoente == 0) {
    return 1;
  } else if (expoente > 0){
    return (pot(base, expoente - 1) * base);
  }
}