/*
** Função : Implementação do jogo "pedra, papel ou tesoura".
** Autor : João Victor Barbosa Perazzo - P1 Noite
** Data : 28/09/2023
** Observações:
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

void abertura()
{
  printf("----- JOGO PEDRA PAPEL TESOURA -----\n");
  printf(" Jogadas disponíveis:\n");
  printf(" -PEDRA: 0\n");
  printf(" -PAPEL: 1\n");
  printf(" -TESOURA: 2\n\n");
}

// Variáveis globais:

// Funções:
int ehvalido(int jogada)
{
  if (jogada == 0 || jogada == 1 || jogada == 2)
  {
    return 1;
  }
  printf("\n Jogada inválida! Tente novamente.\n");
  return 0;
}

int jogadaMaquina()
{
  srand(time(0));

  int jMaquina = rand() % 4;

  return jMaquina;
}

int ganhou(int jogada, int jMaquina)
{
  if (jogada == 0 && jMaquina == 2)
    return 1;
  else if (jogada == 1 && jMaquina == 0)
    return 1;
  else if (jogada == 2 && jMaquina == 1)
    return 1;

  return 0;
}

int empatou(int jogada, int jMaquina)
{
  if (jogada == jMaquina)
  {
    printf("\n Empate! Jogue novamente.\n\n");
    return 1;
  }
  else
    return 0;
}

int main()
{
  setlocale(LC_ALL, "");

  abertura();

  int jogada, jMaquina;

  do
  {
    do
    {
      printf(" Faça sua jogada: ");
      scanf("%i", &jogada);
      fflush(stdin);
    } while (!ehvalido(jogada));

    jMaquina = jogadaMaquina();
    printf(" Jogada da máquina: %i\n\n", jMaquina);

  } while (empatou(jogada, jMaquina));

  if (ganhou(jogada, jMaquina))
    printf(" Parabéns! Você ganhou!");
  else
    printf(" DERROTA! A máquina foi superior!!!");

  return 0;
}