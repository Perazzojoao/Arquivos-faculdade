/*
** Função : Realiza um triangulo de Pascal com quantas linhas o usuário desejar.
** Autor : João Victor Barbosa Perazzo
** Data : 13/11/2023
** Observações:
*/

#include <stdio.h>
#include <locale.h>

double fatorial(double);
void calculaPascal(int);

int main() {
  setlocale(LC_ALL, "Portuguese");

  int n;
  printf(" Digite um número inteiro maior que 0: ");

  do {
  scanf(" %i", &n);
  if (n < 1) {
    printf(" Número inválido! Tente novamente: ");
  }
  } while (n < 1);

  calculaPascal(n+1);

  return 0;
}

double fatorial(double numero) {
  if(numero == 0)
    return 1;
  else
    return numero * fatorial(numero - 1);
}

void calculaPascal(int n) {
  for(int i = 1; i < n; i++) {
    for(int j = 1; j <= i; j++) {
      int resultado = fatorial(i-1) / (fatorial(j-1) * fatorial(i-j));
      printf(" %i", resultado);
    }
    printf("\n");
  }
}