/*
** Função : Verifica se um número é primo.
** Autor : João Victor Barbosa Perazzo
** Data : 09/11/2023
** Observações:
*/

#include <stdio.h>
#include <locale.h>

int ehPrimo(int);

int main() {
  setlocale(LC_ALL, "Portuguese");

  int num;

  printf(" Digite um número inteiro: ");
  scanf(" %i", &num);
  fflush(stdin);
  printf("\n");

  for(int i = 1; i <= num; i++) {
    if (ehPrimo(i)) {
      printf(" %i é primo.\n", i);
    } else
      printf(" %i é composto.\n", i);
  }

  return 0;
}

int ehPrimo(int num) {
  int primo = 1;
  for(int i = 2; i < num; i++) {
    if(!(num % i)) {
      primo = 0;
      break;
    }
  }
  return primo;
}