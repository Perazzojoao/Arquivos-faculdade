/*
** Função : Converte um valor de área de acres para metros quadrados (m²). 
** Autor : João Victor Barbosa Perazzo. P1 - Noite.
** Data : 18/09/23
** Observações:
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float m2, acres;

    printf(" Digite uma área em acres: ");
    scanf("%f", &acres);
    fflush(stdin);

    m2 = acres*4047;

    printf("\n %.4f acres equivale a %.2f m².", acres, m2);

    return 0;
}