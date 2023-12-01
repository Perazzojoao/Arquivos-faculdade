/*
** Função : Calcula a diferença entre dois horários distintos.
** Autor : João Victor Barbosa Perazzo. P1 - Noite.
** Data : 18/09/23
** Observações:
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int hora1, hora2, min1, min2;

    printf(" Informe o primeiro horário:\n");
    printf(" Hora: ");
    scanf("%i", &hora1);
    fflush(stdin);
    printf(" Minuto: ");
    scanf("%i", &min1);
    fflush(stdin);

    printf("\n Informe o segundo horário:\n");
    printf(" Hora: ");
    scanf("%i", &hora2);
    fflush(stdin);
    printf(" Minuto: ");
    scanf("%i", &min2);
    fflush(stdin);

    int hora_f, min_f;

    hora_f = abs(hora2-hora1);
    min_f = abs(min2-min1);

    printf("\n A diferença de hora é de %ih e %imin.", hora_f, min_f);

    return 0;
}