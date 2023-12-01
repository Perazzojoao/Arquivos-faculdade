/*
** Função : Calcula o quadrado e o cubo de um número real.
** Autor : João Victor Barbosa Perazzo. P1 - Noite.
** Data : 18/09/23
** Observações: Por causa da função "setlocale()" deve-se separar as casas decimais com ",".
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float numero;

    printf(" Digite um número real: ");
    scanf("%f", &numero);
    fflush(stdin);

    float quadrado, cubo;

    quadrado = numero*numero;
    cubo = numero*numero*numero;

    printf("\n %.2f elevado ao quadrado é igual a: %2.f\n",numero ,quadrado);
    printf("\n %.2f elevado ao cubo é igual à: %.2f", numero, cubo);

    return 0;
}