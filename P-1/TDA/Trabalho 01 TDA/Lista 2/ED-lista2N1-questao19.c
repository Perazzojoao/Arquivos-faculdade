/*
** Função : Determina se uma determinada data é válida ou não.
** Autor : João Victor Barbosa Perazzo - P1 Noite
** Data : 28/09/2023
** Observações:
*/

#include <stdio.h>
#include <locale.h>

int ehBissexto(int ano)
{
  if ((ano % 400 == 0) || ((ano % 4 == 0) && (ano % 100 != 0)))
  {
    return 1;
  }
  else
    return 0;
}

int anoValido(int ano)
{
  if (ano > 0)
    return 1;
  else
    return 0;
}

int mesValido(int mes)
{
  if (mes > 0 && mes < 13)
    return 1;
  else
    return 0;
}

int diaValido(int dia, int mes, int ano)
{
  if (ehBissexto(ano) && mes == 2)
  {
    if (dia > 0 && dia <= 29)
      return 1;
    else
      return 0;
  }
  else if (mes == 2)
  {
    if (dia > 0 && dia <= 28)
      return 1;
    else
      return 0;
  }

  if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
  {
    if (dia > 0 && dia <= 30)
      return 1;
  }
  else if (dia > 0 && dia <= 31)
    return 1;
  else
    return 0;
}

void ehValido(int dia, int mes, int ano)
{
  if (anoValido(ano) && mesValido(mes) && diaValido(dia, mes, ano))
    printf(" A data %i/%i/%i é válida!", dia, mes, ano);
  else
    printf(" A data %i/%i/%i é inválida!", dia, mes, ano);
}

int main()
{
  setlocale(LC_ALL, "");

  int dia, mes, ano;

  printf(" Digite as informações abaixo:\n");
  printf(" Dia: ");
  scanf(" %i", &dia);
  fflush(stdin);
  printf(" Mês: ");
  scanf(" %i", &mes);
  fflush(stdin);
  printf(" Ano: ");
  scanf(" %i", &ano);
  fflush(stdin);
  printf("\n");

  ehValido(dia, mes, ano);

  return 0;
}