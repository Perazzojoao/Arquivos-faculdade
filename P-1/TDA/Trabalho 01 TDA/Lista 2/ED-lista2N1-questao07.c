/*
** Fun��o : Recebe as notas de um aluno, calcula sua m�dia e informa se ele est� aprovado ou n�o.
** Autor : Jo�o Victor Barbosa Perazzo - P1 Noite
** Data : 28/09/2023
** Observa��es:
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "");

  int identificacao;
  float nota1, nota2, nota3;

  printf(" Digite as informa��es abaixo:\n");
  printf(" N�mero de identifica��o: ");
  scanf("%i", &identificacao);
  fflush(stdin);
  printf(" 1� nota: ");
  scanf("%f", &nota1);
  fflush(stdin);
  printf(" 2� nota: ");
  scanf("%f", &nota2);
  fflush(stdin);
  printf(" 3� nota: ");
  scanf("%f", &nota3);
  fflush(stdin);
  printf("\n");

  float me = (nota1 + nota2 + nota3) / 3;
  float ma = (nota1 + (nota2 * 2) + (nota3 * 3) + me) / 7;
  char conceito;
  int aprovado = 1;

  if (ma == 9)
  {
    conceito = 'A';
  }
  else if (ma >= 7.5 && ma < 9)
  {
    conceito = 'B';
  }
  else if (ma >= 6 && ma < 7.5)
  {
    conceito = 'C';
  }
  else if (ma >= 4 && ma < 6)
  {
    conceito = 'D';
    aprovado = 0;
  }
  else if (ma < 4)
  {
    conceito = 'E';
    aprovado = 0;
  }

  char situacao[15];

  if (aprovado)
  {
    strcpy(situacao, "Aprovado!");
  }
  else
  {
    strcpy(situacao, "Reprovado!");
  }

  printf("-------------- ALUNO N� %i --------------\n", identificacao);
  printf(" Notas: N1 = %.2f; N2 = %.2f; N3 = %.2f\n", nota1, nota2, nota3);
  printf(" M�dia: %.2f\n", me);
  printf(" M�dia de aproveitamento: %.2f\n", ma);
  printf(" Conceito: %c\n\n", conceito);

  printf(" Situa��o: %s", situacao);

  return 0;
}