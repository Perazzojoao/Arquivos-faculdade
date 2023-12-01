/*
** Função : Calcula a multiplicação entre dois números inteiros e imprime a tabuada de 2 até um número N.
** Autor : João Victor Barbosa Perazzo
** Data : 13/11/2023
** Observações:
*/

#include <stdio.h>
#include <locale.h>

void multiplica(int);

int main() {
  setlocale(LC_ALL, "Portuguese");

  int n;

  printf(" Digite um número inteiro: ");
  scanf(" %i", &n);
  fflush(stdin);
  printf("\n");

  multiplica(n);

  return 0;
}

void multiplica(int x) {
  if (x > 2) {
    multiplica(x - 1);
  }

  for (int i = 1; i <= 10; i++) {
    int resultado = x * i;
    printf(" %i x %i = %i\n", x, i, resultado);
  }
  printf("\n");
}
