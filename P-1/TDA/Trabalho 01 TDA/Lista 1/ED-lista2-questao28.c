/*
** Fun��o : Calcula a diferen�a entre dois hor�rios distintos.
** Autor : Jo�o Victor Barbosa Perazzo. P1 - Noite.
** Data : 18/09/23
** Observa��es:
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int hora1, hora2, min1, min2;

    printf(" Informe o primeiro hor�rio:\n");
    printf(" Hora: ");
    scanf("%i", &hora1);
    fflush(stdin);
    printf(" Minuto: ");
    scanf("%i", &min1);
    fflush(stdin);

    printf("\n Informe o segundo hor�rio:\n");
    printf(" Hora: ");
    scanf("%i", &hora2);
    fflush(stdin);
    printf(" Minuto: ");
    scanf("%i", &min2);
    fflush(stdin);

    int hora_f, min_f;

    hora_f = abs(hora2-hora1);
    min_f = abs(min2-min1);

    printf("\n A diferen�a de hora � de %ih e %imin.", hora_f, min_f);

    return 0;
}