#include <stdio.h>
#include <locale.h>

int divisores(int n);

int main() {
  setlocale(LC_ALL, "Portugese");

  int n;
  printf("Digite um número inteiro: ");
  scanf("%d", &n);

  printf("O número %d tem %d divisores.\n", n, divisores(n));

  return 0;
}

int divisores(int n) {
  int i, cont = 0;
  for (i = 1; i <= n; i++) {
    if (n % i == 0) {
      cont++;
    }
  }
  return cont;
}