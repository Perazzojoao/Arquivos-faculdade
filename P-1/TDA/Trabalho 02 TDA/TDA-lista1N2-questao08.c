/*
** Função : Função recursiva que implemente o resto da divisão da expressão utilizada como exemplo.
** Autor : João Victor Barbosa Perazzo
** Data : 13/11/2023
** Observações:
*/

#include <stdio.h>
#include <locale.h>

int resto(int, int);

int main() {
  setlocale(LC_ALL, "Portuguese");

  int x = 17;
  int y = 12;

  int rest = resto(x, y);

  printf(" O resto da divisão de %i e %i é %i", x, y, rest);

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