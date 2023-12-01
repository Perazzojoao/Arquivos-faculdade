/*
** Fun��o : L� as notas de um aluno e informa se foi aprovado ou n�o
** Autor : Jo�o Victor Barbosa Perazzo - P1 Noite
** Data : 28/09/2023
** Observa��es:
*/

#include <stdio.h>
#include <locale.h>

float media(float notas[3])
{
  float soma = 0;
  for (int i = 0; i < 2; i++)
  {
    soma += notas[i];
  }
  return (soma / 2);
}

int aprovado(float notas[3])
{
  if (notas[0] >= 3 && notas[1] >= 3)
  {
    if (media(notas) >= 5)
    {
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    return 0;
  }
}

float maiorNota(float notas[3])
{
  float maior;

  for (int i = 0; i < 3; i++)
  {
    if (notas[i] > maior)
    {
      maior = notas[i];
    }
  }
  return maior;
}

float mediaNotas(float notas[3])
{

  float menor = maiorNota(notas);
  float medio;

  for (int i = 0; i < 3; i++)
  {
    if (notas[i] < menor)
    {
      menor = notas[i];
    }
  }

  for (int i = 0; i < 3; i++)
  {
    if (notas[i] >= menor && notas[i] <= maiorNota(notas))
    {
      medio = notas[i];
    }
  }
  return medio;
}

int main()
{
  setlocale(LC_ALL, "");

  float notas[3];

  printf(" Digite as informa��es abaixo:\n");

  for (int i = 0; i < 2; i++)
  {
    printf(" Nota %i : ", i + 1);
    scanf("%f", &notas[i]);
    fflush(stdin);
  }
  printf("\n");

  if (!aprovado(notas))
  {
    printf(" Suas notas foram insuficientes! Fa�a a 3� prova.\n");
    printf(" Informe a nota da sua 3� avalia��o: ");
    scanf("%f", &notas[2]);
    fflush(stdin);

    float notasFinais[2] = {maiorNota(notas), mediaNotas(notas)};

    if (!aprovado(notasFinais))
    {
      printf(" M�dia final: %.2f\n", media(notasFinais));
      printf(" Aluno reprovado!");
    }
    else
    {
      printf(" M�dia final: %.2f\n", media(notasFinais));
      printf(" Aluno aprovado!");
    }
  }
  else
  {
    printf(" M�dia final: %.2f\n", media(notas));
    printf(" Aluno aprovado!");
  }

  return 0;
}