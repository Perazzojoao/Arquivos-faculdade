/*
** Fun��o:
** Autor : Jo�o Victor Barbosa Perazzo. P1 - Noite.
** Data : 18/09/23
** Observa��es:
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float milhas, kilometros;

    printf (" Digite uma dist�ncia em kil�metros: ");
    scanf ("%f", &kilometros);
    fflush(stdin);

    milhas = kilometros / 1.609;

    printf ("\n %.2f km � igual a %.2f milhas.\n\n", kilometros, milhas);

    return 0;
}