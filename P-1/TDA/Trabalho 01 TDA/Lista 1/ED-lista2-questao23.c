/*
** Fun��o : Calcula o sal�rio com um aumento de 25%.
** Autor : Jo�o Victor Barbosa Perazzo. P1 - Noite.
** Data : 18/09/23
** Observa��es:
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float salario_inicial, salario_final;

    printf(" Informe seu sal�rio: ");
    scanf("%f", &salario_inicial);
    fflush(stdin);

    salario_final = salario_inicial * 1.25;

    printf("\n Seu sal�rio de R$%.2f recebeu um reajuste de +25%% e passou a ser R$%.2f.", salario_inicial, salario_final);

    return 0;
}