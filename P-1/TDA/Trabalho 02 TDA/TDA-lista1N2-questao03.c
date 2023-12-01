/*
** Função : Informa a soma dos números primos de um número informado pelo usuário.
** Autor : João Victor Barbosa Perazzo
** Data : 09/11/2023
** Observações:
*/

#include <stdio.h>
#include <locale.h>

int ehPar(int);
int ehPrimo(int);
void mostraSomas(int);

int main() {
  setlocale(LC_ALL, "Portuguese");

  int num;

  printf(" Digite um número par inteiro maior que 2: ");
  scanf(" %i", &num);
  fflush(stdin);
  printf("\n");

  int intervalo = num - 2;

  mostraSomas(intervalo);

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

void mostraSomas(int intervalo) {
  int listaPares[(intervalo/2)+1];
  int j = 0;

  for(int i = 2; i <= (intervalo+2); i++) {
    if(ehPar(i)) {
      listaPares[j] = i;
      j++;
    }
  }

  for(int i = 0; i < (intervalo / 2)+1; i++) {
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

      if(numAtual == (numDividido[0] + numDividido[1])) {
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
        printf("%i = ERRO!\n", numAtual);
        controle = 1;
      }
    } while(controle == 0);
  }
}