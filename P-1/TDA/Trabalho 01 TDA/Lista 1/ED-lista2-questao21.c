/*
** Fun��o : Converte um valor de �rea de acres para metros quadrados (m�). 
** Autor : Jo�o Victor Barbosa Perazzo. P1 - Noite.
** Data : 18/09/23
** Observa��es:
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float m2, acres;

    printf(" Digite uma �rea em acres: ");
    scanf("%f", &acres);
    fflush(stdin);

    m2 = acres*4047;

    printf("\n %.4f acres equivale a %.2f m�.", acres, m2);

    return 0;
}