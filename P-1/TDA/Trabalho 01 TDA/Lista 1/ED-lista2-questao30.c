/*
** Função : Calcula a densidade de uma substância.
** Autor : João Victor Barbosa Perazzo. P1 - Noite.
** Data : 20/09/23
** Observações:
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float massa, volume, densidade;

    printf(" Informe os seguintes dados:\n");
    printf(" Massa (g): ");
    scanf("%f", &massa);
    fflush(stdin);
    printf(" Volume (cm³): ");
    scanf("%f", &volume);
    fflush(stdin);

    densidade = massa/volume;

    printf("\n A densidade da substância é %.2f g/cm³.", densidade);


    return 0;
}