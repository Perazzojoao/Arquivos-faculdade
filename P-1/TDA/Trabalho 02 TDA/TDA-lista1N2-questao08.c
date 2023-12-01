/*
** Fun��o : Fun��o recursiva que implemente o resto da divis�o da express�o utilizada como exemplo.
** Autor : Jo�o Victor Barbosa Perazzo
** Data : 13/11/2023
** Observa��es:
*/

#include <stdio.h>
#include <locale.h>

int resto(int, int);

int main() {
  setlocale(LC_ALL, "Portuguese");

  int x = 17;
  int y = 12;

  int rest = resto(x, y);

  printf(" O resto da divis�o de %i e %i � %i", x, y, rest);

  return 0;
}

int resto(int x, int y) {
  if (x == y) {
    return 0;
  }
  else if (x < y) {
    return x;
  } else {
    return resto(x-y, y);
  }
}