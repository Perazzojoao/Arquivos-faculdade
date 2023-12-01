/*
** Fun��o : Calcula a densidade de uma subst�ncia.
** Autor : Jo�o Victor Barbosa Perazzo. P1 - Noite.
** Data : 20/09/23
** Observa��es:
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
    printf(" Volume (cm�): ");
    scanf("%f", &volume);
    fflush(stdin);

    densidade = massa/volume;

    printf("\n A densidade da subst�ncia � %.2f g/cm�.", densidade);


    return 0;
}