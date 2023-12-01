/*
** Função : Converte um velocidade de m/s para km/h.
** Autor : João Victor Barbosa Perazzo. P1 - Noite.
** Data : 18/09/23
** Observações:
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

    printf("\n %.2f m/s é igual à %.2f km/h\n\n", ms, kmh);

    return 0;
}