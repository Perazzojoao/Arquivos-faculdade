/*
** Função : Converte comprimentos de polegada (in) para centímetro (cm).
** Autor : João Victor Barbosa Perazzo. P1 - Noite.
** Data : 18/09/23
** Observações:
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float in, cm;

    printf(" Digite um comprimento em polegadas (in): ");
    scanf("%f", &in);
    fflush(stdin);

    cm = in * 2.54;

    printf("\n %.2f in equivale a %.2f cm.", in, cm);

    return 0;
}