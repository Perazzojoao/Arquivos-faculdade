/*
** Fun��o : Calcula a quinta parte de um n�mero real.
** Autor : Jo�o Victor Barbosa Perazzo. P1 - Noite.
** Data : 18/09/23
** Observa��es:
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

    float resultado = numero/5;

    printf("\n A quinta parte de %.2f � igual �: %.4f\n\n", numero, resultado);

    return 0;
}