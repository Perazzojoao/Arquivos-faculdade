/*
** Fun��o : Informa o tipo de tri�ngulo
** Autor : Jo�o Victor Barbosa Perazzo - P1 Noite
** Data : 28/09/2023
** Observa��es:
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
    printf(" O tri�ngulo � equil�tero!");
  }
  else if (a != b && a != c && c != b)
  {
    printf(" O tri�ngulo � escaleno!");
  }
  else if (a == b || a == c || c == b)
  {
    printf(" O tri�ngulo � is�scele!");
  }
}

int main()
{
  setlocale(LC_ALL, "");

  int a, b, c;

  printf(" Informe o valor inteiro das faces de um tri�ngulo:\n");
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
    printf(" O tri�ngulo � inv�lido!");
  }
  else
  {
    defineTriangulo(a, b, c);
  }

  return 0;
}