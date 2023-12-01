/*
** Função : Prova que todo número inteiro par maior que 2 é a soma de dois outros números primos.
** Autor : João Victor Barbosa Perazzo
** Data : 09/11/2023
** Observações: O programa imprime "ERRO!" quando não consegue achar uma soma que se encaixe nos requisitos.
*/

#include <stdio.h>
#include <locale.h>
#define INTERVALO 401

int ehPar(int);
int ehPrimo(int);

int main() {
  setlocale(LC_ALL, "Portuguese");
  
  int listaPares[INTERVALO];
  int j = 0;

  for(int i = 700; i <= 1100; i++) {
    if(ehPar(i)) {
      listaPares[j] = i;
      j++;
    }
  }

  for(int i = 0; i < (INTERVALO / 2)+1; i++) {
    int numAtual = listaPares[i];
    int numDividido[2] = {numAtual/2, numAtual/2};
    int controle = 0;

    do {
      while(!ehPrimo(numDividido[0])) {
        numDividido[0]--;
      }
      while(!ehPrimo(numDividido[1])) {
        numDividido[1]++;
      }

      if(numDividido[0] + numDividido[1] == numAtual) {
        printf("%i = %i + %i\n", numAtual, numDividido[0], numDividido[1]);
        controle = 1;
      } else {
        if(numDividido[0] > 1) {
        numDividido[0]--;
        }
        if(numDividido[1] < (numAtual - 1)) {
        numDividido[1]++;
        }
      }

      if(numDividido[0] <= 0 || numDividido[1] >= numAtual) {
        printf(" ERRO!\n");
        break;
      }
    } while(controle == 0);
  }
  return 0;
}

int ehPar(int num) {
  if (num % 2) {
    return 0;
  } else 
    return 1;
}

int ehPrimo(int num) {
  int primo = 1;
  for(int i = 2; i < num; i++) {
    if(!(num % i)) {
      primo = 0;
      break;
    }
  }
  return primo;
}