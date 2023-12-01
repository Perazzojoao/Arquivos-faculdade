/*
** FunÃ§Ã£o : Converte  distância de milhas para kilômetros.
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

    printf (" Digite uma distância em milhas: ");
    scanf ("%f", &milhas);
    fflush(stdin);

    kilometros = milhas * 1.609;

    printf ("\n %.2f milhas é igual à %.2f km.\n\n", milhas, kilometros);

    return 0;
}