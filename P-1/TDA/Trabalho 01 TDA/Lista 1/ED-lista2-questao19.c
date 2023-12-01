/*
** Fun��o : Converte volumes de metros c�bicos (m�) para litros (l).
** Autor : Jo�o Victor Barbosa Perazzo. P1 - Noite.
** Data : 18/09/23
** Observa��es:
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float m3, litros;

    printf(" Digite um volume em metros c�bicos (m�): ");
    scanf("%f", &m3);
    fflush(stdin);

    litros = m3*1000;

    printf("\n %.2f m� equivale a %.2f litros.", m3, litros);

    return 0;
}