/*
** Fun��o : Converte um velocidade de m/s para km/h.
** Autor : Jo�o Victor Barbosa Perazzo. P1 - Noite.
** Data : 18/09/23
** Observa��es:
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float ms, kmh;

    printf(" Digite uma velocidade em metros por segundo (m/s): ");
    scanf("%f", &ms);
    fflush(stdin);

    kmh = ms*3.6;

    printf("\n %.2f m/s � igual � %.2f km/h\n\n", ms, kmh);

    return 0;
}