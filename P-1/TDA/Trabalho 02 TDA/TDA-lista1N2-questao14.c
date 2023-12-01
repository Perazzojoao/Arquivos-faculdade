/*
** Função : Lê e exibe as notas de alunos em um vetor.
** Autor : João Victor Barbosa Perazzo
** Data : 13/11/2023
** Observações:
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <math.h>

#define MEDIA 7

void inserirNotas(float*, int);
void notasAleatorias(float*, int);
void mostrarListaNotas(float*, int);
void maiorEMenorNota(float*, int);
void mediaAlunos(float*, int);
void alunosAcimaMedia(float*, int);
void alunosAbaixoMedia(float*, int);
void alunosNaMedia(float*, int);
void varianciaEDesvioPadrao(float*, int);

int main() {
  setlocale(LC_ALL, "Portuguese");

  int quantAlunos = 0;

  do {
    printf(" Quantidade de alunos (min de 10 e max de 100): ");
    scanf(" %i", &quantAlunos);
    fflush(stdin);
    if(quantAlunos < 10 || quantAlunos > 100) {
      printf("\n Quantidade inválida! Tente novamente.\n");
    }
  } while(quantAlunos < 10 || quantAlunos > 100);

  float notasAlunos[100];
  char opcao;
  printf(" Deseja inserir as notas dos alunos? (s/n): ");
  scanf(" %c", &opcao);
  fflush(stdin);

  if(opcao == 's' || opcao == 'S') {
    inserirNotas(notasAlunos, quantAlunos);
  } else {
    notasAleatorias(notasAlunos, quantAlunos);
  }

  mostrarListaNotas(notasAlunos, quantAlunos);
  maiorEMenorNota(notasAlunos, quantAlunos);
  mediaAlunos(notasAlunos, quantAlunos);
  alunosAcimaMedia(notasAlunos, quantAlunos);
  alunosAbaixoMedia(notasAlunos, quantAlunos);
  alunosNaMedia (notasAlunos, quantAlunos);
  varianciaEDesvioPadrao(notasAlunos, quantAlunos);

  return 0;
}

void inserirNotas(float* notasAlunos, int quantAlunos) {
  printf(" Digite as notas dos alunos abaixo:\n");

  for(int i = 0; i < quantAlunos; i++) {
    printf(" Aluno %i: ", i+1);
    scanf(" %f", &notasAlunos[i]);
  }
}

void notasAleatorias(float* notasAlunos, int quantAlunos) {
  srand(time(NULL));
  for(int i = 0; i < quantAlunos; i++) {
    int notaAleatoriaInteira = rand() % 11;
    float notaAleatoriaDecimal = rand() % 100;
    notaAleatoriaDecimal /= 100;
    float notaAleatoria;

    if(notaAleatoriaInteira == 10) {
      notaAleatoria = notaAleatoriaInteira;
    } else {
      notaAleatoria = (float)notaAleatoriaInteira + notaAleatoriaDecimal;
    }
    notasAlunos[i] = notaAleatoria;
  }
}

void mostrarListaNotas(float* notasAlunos, int quantAlunos) {
  for(int i = 0; i < quantAlunos; i++) {
    printf(" Nota aluno %i: %.2f\n", i+1, notasAlunos[i]);
  }
  printf("\n");
}

void maiorEMenorNota(float* notasAlunos, int quantAlunos) {
  float maiorNota = 0;
  for(int i = 0; i < quantAlunos; i++) {
    if(notasAlunos[i] > maiorNota) {
      maiorNota = notasAlunos[i];
    }
  }

  float menorNota = maiorNota;
  for(int i = 0; i < quantAlunos; i++) {
    if(notasAlunos[i] < menorNota) {
      menorNota = notasAlunos[i];
    }
  }

  printf(" A maior nota é: %.2f\n", maiorNota);
  printf(" A menor nota é: %.2f\n", menorNota);
}

void mediaAlunos(float* notasAlunos, int quantAlunos) {
  float somatorio = 0;
  float media = 0;
  for(int i = 0; i < quantAlunos; i++) {
    somatorio += notasAlunos[i];
  }

  media = somatorio / quantAlunos;
  printf(" A média da turma é: %.2f\n", media);
}

void alunosAcimaMedia(float* notasAlunos, int quantAlunos) {
  int alunosAcima = 0;
  for(int i = 0; i < quantAlunos; i++) {
    if(notasAlunos[i] > 7) {
      alunosAcima++;
    }
  }
  printf(" Alunos acima da média: %i\n", alunosAcima);
}

void alunosAbaixoMedia(float* notasAlunos, int quantAlunos) {
  int alunosAbaixo = 0;
  for(int i = 0; i < quantAlunos; i++) {
    if(notasAlunos[i] < 7) {
      alunosAbaixo++;
    }
  }
  printf(" Alunos abaixo da média: %i\n", alunosAbaixo);
}

void alunosNaMedia(float* notasAlunos, int quantAlunos) {
  int alunosMedia = 0;
  for(int i = 0; i < quantAlunos; i++) {
    if(notasAlunos[i] == 7) {
      alunosMedia++;
    }
  }
  printf(" Alunos na média: %i\n", alunosMedia);
}

void varianciaEDesvioPadrao(float* notasAlunos, int quantAlunos) {
  float somatorio = 0;
  float media = 0;
  for(int i = 0; i < quantAlunos; i++) {
    somatorio += notasAlunos[i];
  }
  media = somatorio / quantAlunos;

  somatorio = 0;
  for(int i = 0; i < quantAlunos; i++) {
    somatorio += pow(notasAlunos[i] - media, 2);
  }
  float variancia = sqrt(somatorio / quantAlunos - 1);
  float desvioPadrao = sqrt(somatorio / quantAlunos);

  printf(" A variância da turma é: %.2f\n", variancia);
  printf(" O desvio padrão da turma é: %.2f\n", desvioPadrao);
}