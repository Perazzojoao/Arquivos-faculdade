/*
** Função : Informa o tipo de triângulo
** Autor : João Victor Barbosa Perazzo - P1 Noite
** Data : 28/09/2023
** Observações:
*/

#include <stdio.h>
#include <locale.h>

int ehValido(int a, int b, int c)
{
  int valido = 0;

  if (a < b + c && b < a + c && c < a + b)
  {
    valido = 1;
  }
  return valido;
}

void defineTriangulo(int a, int b, int c)
{
  if (a == b && a == c)
  {
    printf(" O triângulo é equilátero!");
  }
  else if (a != b && a != c && c != b)
  {
    printf(" O triângulo é escaleno!");
  }
  else if (a == b || a == c || c == b)
  {
    printf(" O triângulo é isóscele!");
  }
}

int main()
{
  setlocale(LC_ALL, "");

  int a, b, c;

  printf(" Informe o valor inteiro das faces de um triângulo:\n");
  printf(" Lado a: ");
  scanf(" %i", &a);
  fflush(stdin);
  printf(" Lado b: ");
  scanf(" %i", &b);
  fflush(stdin);
  printf(" Lado c: ");
  scanf(" %i", &c);
  fflush(stdin);

  printf("\n");

  if (!ehValido(a, b, c))
  {
    printf(" O triângulo é inválido!");
  }
  else
  {
    defineTriangulo(a, b, c);
  }

  return 0;
}