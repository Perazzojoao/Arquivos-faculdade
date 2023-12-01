/*
** Função : Calcula a distância das coodenadas (x, y) para a origem (0, 0).
** Autor : João Victor Barbosa Perazzo. P1 - Noite.
** Data : 18/09/23
** Observações:
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

    printf("\n A distância da coordenada (%.f,%.f) para a origem (0,0) é %.2f.",x, y, dist);

    return 0;
}