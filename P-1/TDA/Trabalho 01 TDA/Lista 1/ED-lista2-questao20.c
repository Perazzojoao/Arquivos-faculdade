/*
** Função : Converte um valor de área de metros quadrados (m²) para acres. 
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

    printf(" Digite uma área em metros quadrados (m²): ");
    scanf("%f", &m2);
    fflush(stdin);

    acres = m2 / 4047;

    printf("\n %.2f m² equivale a %.4f acres.", m2, acres);

    return 0;
}