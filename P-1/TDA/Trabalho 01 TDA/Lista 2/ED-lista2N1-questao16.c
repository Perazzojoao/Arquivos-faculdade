/*
** Função : Converte diferentes unidades
** Autor : João Victor Barbosa Perazzo - P1 Noite
** Data : 28/09/2023
** Observações:
*/

#include <stdio.h>
#include <locale.h>

void abertura()
{
  printf("----- CONVERSÃO DE UNIDADES -----\n");
  printf(" Categorias disponíveis:\n");
  printf(" 1- PESO\n");
  printf(" 2- VOLUME\n");
  printf(" 3- COMPRIMENTO\n\n");
}

int ehvalidoCat(int categoria)
{
  if (categoria == 1 || categoria == 2 || categoria == 3)
  {
    return 1;
  }
  printf("\n Categoria inválida! Tente novamente.\n");
  return 0;
}

int ehvalidoConv(int conversao)
{
  if (conversao == 1 || conversao == 2 || conversao == 3 || conversao == 4)
  {
    return 1;
  }
  printf("\n Conversão inválida! Tente novamente.\n");
  return 0;
}

void aberturaPeso()
{
  printf("\n----------- PESO -----------\n");
  printf(" Conversões disponíveis:\n");
  printf(" I.   Libra -> Quilograma: 1\n");
  printf(" II.  Quilograma -> Libra: 2\n");
  printf(" III. Onça -> Grama: 3\n");
  printf(" IV.  Grama -> Onça: 4\n\n");
}

void aberturaVolume()
{
  printf("\n----------- VOLUME -----------\n");
  printf(" Conversões disponíveis:\n");
  printf(" I.   Galão -> Litro: 1\n");
  printf(" II.  Litro -> Galão: 2\n");
  printf(" III. Onça -> Mililitro: 3\n");
  printf(" IV.  Mililitro -> Onça: 4\n\n");
}

void aberturaComp()
{
  printf("\n-------- COMPRIMENTO --------\n");
  printf(" Conversões disponíveis:\n");
  printf(" I.   Milha -> Quilômetro: 1\n");
  printf(" II.  Quilômetro -> Milha: 2\n");
  printf(" III. Jardas -> Metro: 3\n");
  printf(" IV.  Metro -> Jardas: 4\n\n");
}

void aberturaCategoria(int categoria)
{
  switch (categoria)
  {
  case 1:
    aberturaPeso();
    break;
  case 2:
    aberturaVolume();
    break;
  case 3:
    aberturaComp();
    break;
  }
}

int selecionaCategoria(int categoria)
{
  int conversao;

  do
  {
    printf(" Escolha uma conversão: ");
    scanf("%i", &conversao);
    fflush(stdin);
  } while (!ehvalidoConv(conversao));

  return conversao;
}

void converte(int categoria, int conversao)
{
  float valor, resultado;

  printf(" Valor: ");
  scanf("%f", &valor);
  fflush(stdin);

  switch (categoria)
  {
  case 1: // PESO
    switch (conversao)
    {
    case 1:
      resultado = valor * 0.453592;

      printf("\n %.2lf libras = %.2lf Kg\n", valor, resultado);
      break;
    case 2:
      resultado = valor / 0.453592;

      printf("\n %.2lf Kg = %.2lf libras\n", valor, resultado);
      break;
    case 3:
      resultado = valor * 28.3495;

      printf("\n %.2lf onças = %.2lf g\n", valor, resultado);
      break;
    case 4:
      resultado = valor / 28.3495;

      printf("\n %.2lf g = %.2lf onças\n", valor, resultado);
      break;
    }
    break;

  case 2: // VOLUME
    switch (conversao)
    {
    case 1:
      resultado = valor * 3.78541;

      printf("\n %.2lf galões = %.2lf L\n", valor, resultado);
      break;
    case 2:
      resultado = valor / 3.78541;

      printf("\n %.2lf L = %.2lf galões\n", valor, resultado);
      break;
    case 3:
      resultado = valor * 29.5735;

      printf("\n %.2lf onças = %.2lf ml\n", valor, resultado);
      break;
    case 4:
      resultado = valor / 29.5735;

      printf("\n %.2lf ml = %.2lf onças\n", valor, resultado);
      break;
    }
    break;
  case 3: // COMPRIMENTO
    switch (conversao)
    {
    case 1:
      resultado = valor * 1.60934;

      printf("\n %.2lf milhas = %.2lf Km\n", valor, resultado);
      break;
    case 2:
      resultado = valor / 1.60934;

      printf("\n %.2lf Km = %.2lf milhas\n", valor, resultado);
      break;
    case 3:
      resultado = valor * 0.9144;

      printf("\n %.2lf jardas = %.2lf m\n", valor, resultado);
      break;
    case 4:
      resultado = valor / 0.9144;

      printf("\n %.2lf m = %.2lf jardas\n", valor, resultado);
      break;
    }
    break;
  }
}

int main()
{
  setlocale(LC_ALL, "");

  abertura();

  int categoria;

  do
  {
    printf(" Escolha uma categoria: ");
    scanf("%i", &categoria);
    fflush(stdin);
  } while (!ehvalidoCat(categoria));

  aberturaCategoria(categoria);

  converte(categoria, selecionaCategoria(categoria));

  return 0;
}