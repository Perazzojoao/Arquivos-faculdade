/*
** Fun��o : Converte um n�mero de radianos para graus.
** Autor : Jo�o Victor Barbosa Perazzo. P1 - Noite.
** Data : 18/09/23
** Observa��es:
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float graus, rad;
    double pi = 3.141592653;

    printf (" Digite um �ngulo em radianos: ");
    scanf ("%f", &rad);
    fflush(stdin);

    graus = (rad*180)/pi;

    printf ("\n %.2f rad � igual a %.2f�.\n\n", rad, graus);

    return 0;
}