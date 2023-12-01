/*
** Fun��o : Calcula a dist�ncia das coodenadas (x, y) para a origem (0, 0).
** Autor : Jo�o Victor Barbosa Perazzo. P1 - Noite.
** Data : 18/09/23
** Observa��es:
*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    double x, y, dist;

    printf(" Digite a coordenada x: ");
    scanf ("%lf", &x);
    fflush(stdin);

    printf(" Digite a coordenada y: ");
    scanf ("%lf", &y);
    fflush(stdin);

    dist = sqrt((pow(x,2)+pow(y,2)));

    printf("\n A dist�ncia da coordenada (%.f,%.f) para a origem (0,0) � %.2f.",x, y, dist);

    return 0;
}