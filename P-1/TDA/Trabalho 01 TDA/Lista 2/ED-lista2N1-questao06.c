/*
** Fun��o : Informa a categoria de um nadador com base em sua idade.
** Autor : Jo�o Victor Barbosa Perazzo - P1 Noite
** Data : 28/09/2023
** Observa��es:
*/

#include <stdio.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "");

  int idade;

  printf(" Informe sua idade: ");
  scanf("%i", &idade);
  fflush(stdin);

  if (idade >= 4 && idade <= 7)
  {
    printf(" Categoria infantil A.");
  }
  else if (idade > 7 && idade <= 9)
  {
    printf(" Categoria infantil B.");
  }
  else if (idade > 9 && idade <= 12)
  {
    printf(" Categoria juvenil A.");
  }
  else if (idade > 12 && idade <= 17)
  {
    printf(" Categoria juvenil B.");
  }
  else if (idade > 17 && idade <= 25)
  {
    printf(" Categoria s�nior.");
  }
  else
  {
    printf(" Idade fora da faixa et�ria!");
  }

  return 0;
}