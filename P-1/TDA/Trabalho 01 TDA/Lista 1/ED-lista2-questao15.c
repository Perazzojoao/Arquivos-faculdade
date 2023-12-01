/*
** Função:
** Autor : João Victor Barbosa Perazzo. P1 - Noite.
** Data : 18/09/23
** Observações:
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float milhas, kilometros;

    printf (" Digite uma distância em kilômetros: ");
    scanf ("%f", &kilometros);
    fflush(stdin);

    milhas = kilometros / 1.609;

    printf ("\n %.2f km é igual a %.2f milhas.\n\n", kilometros, milhas);

    return 0;
}