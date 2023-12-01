/*
** Fun��o : converte um n�mero na dase decimal para outra base a escolha do usu�rio.
** Autor : Jo�o Victor Barbosa Perazzo
** Data : 13/11/2023
** Observa��es:
*/

#include <stdio.h>
#include <locale.h>

int converte(int, int);

int main() {
  setlocale(LC_ALL, "Portuguese");

  int num, base;

  printf(" Digite um n�mero inteiro: ");
  scanf(" %i", &num);
  fflush(stdin);
  printf(" Digite a base de convers�o: ");
  scanf(" %i", &base);
  fflush(stdin);
  printf("\n");

  printf(" %i na base %i � igual a", num, base);

  converte(num, base);

  return 0;
}

int converte(int num, int base) {
  if(num / base == 0) {
    if(num%base > 9) {
      switch (num%base) {
        case 10:
          printf(" A");
          break;
        case 11:
          printf(" B");
          break;
        case 12:
          printf(" C");
          break;
        case 13:
          printf(" D");
          break;
        case 14:
          printf(" E");
          break;
        case 15:
          printf(" F");
          break;
        case 16:
          printf(" G");
          break;
      }
    } else 
      printf(" %i", (num%base));
    return (num%base) * base;
  } else {
    converte(num/base, base);

    if(num%base > 9) {
      switch (num%base) {
        case 10:
          printf("A");
          break;
        case 11:
          printf("B");
          break;
        case 12:
          printf("C");
          break;
        case 13:
          printf("D");
          break;
        case 14:
          printf("E");
          break;
        case 15:
          printf("F");
          break;
        case 16:
          printf("G");
          break;
      }
    } else 
      printf("%i", (num%base));
    return (num % base) * base;
  }
}