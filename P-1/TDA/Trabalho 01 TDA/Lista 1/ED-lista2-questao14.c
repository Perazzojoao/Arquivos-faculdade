/*
** Função : Converte  dist�ncia de milhas para kil�metros.
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

    printf (" Digite uma dist�ncia em milhas: ");
    scanf ("%f", &milhas);
    fflush(stdin);

    kilometros = milhas * 1.609;

    printf ("\n %.2f milhas � igual � %.2f km.\n\n", milhas, kilometros);

    return 0;
}