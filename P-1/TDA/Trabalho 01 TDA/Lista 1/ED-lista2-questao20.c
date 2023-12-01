/*
** Fun��o : Converte um valor de �rea de metros quadrados (m�) para acres. 
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

    printf(" Digite uma �rea em metros quadrados (m�): ");
    scanf("%f", &m2);
    fflush(stdin);

    acres = m2 / 4047;

    printf("\n %.2f m� equivale a %.4f acres.", m2, acres);

    return 0;
}