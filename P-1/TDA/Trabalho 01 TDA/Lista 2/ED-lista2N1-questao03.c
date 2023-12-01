/*
** Fun��o : Calcular o IMC de uma pessoa
** Autor : Jo�o Victor Barbosa Perazzo - P1 Noite
** Data : 28/09/2023
** Observa��es:
*/

#include <stdio.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "");

  float altura, peso;

  printf(" Informe os seguintes dados:\n");
  printf(" Altura (m): ");
  scanf(" %f", &altura);
  fflush(stdin);
  printf(" Peso (kg): ");
  scanf(" %f", &peso);
  fflush(stdin);

  float imc = peso / (altura * altura);

  printf("\n Seu IMC calculado �: %.2f\n", imc);

  if (imc < 18.5)
  {
    printf(" Voc� est� abaixo do peso ideal!");
  }
  else if (imc >= 18.5 && imc < 25)
  {
    printf(" Voc� est� no seu peso ideal!");
  }
  else if (imc >= 25 && imc < 30)
  {
    printf(" Voc� est� com sobrepeso!");
  }
  else if (imc >= 30 && imc < 35)
  {
    printf(" Voc� est� com obesidade grau 1!");
  }
  else if (imc >= 35 && imc < 40)
  {
    printf("Voc� est� com obesidade grau 2!");
  }
  else if (imc >= 40)
  {
    printf("Voc� est� com obesidade grau 3!");
  }

  return 0;
}