/*
** Fun��o : Calcula o quadrado e o cubo de um n�mero real.
** Autor : Jo�o Victor Barbosa Perazzo. P1 - Noite.
** Data : 18/09/23
** Observa��es: Por causa da fun��o "setlocale()" deve-se separar as casas decimais com ",".
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float numero;

    printf(" Digite um n�mero real: ");
    scanf("%f", &numero);
    fflush(stdin);

    float quadrado, cubo;

    quadrado = numero*numero;
    cubo = numero*numero*numero;

    printf("\n %.2f elevado ao quadrado � igual a: %2.f\n",numero ,quadrado);
    printf("\n %.2f elevado ao cubo � igual �: %.2f", numero, cubo);

    return 0;
}