/*
** Função : Converte volumes de metros cúbicos (m³) para litros (l).
** Autor : João Victor Barbosa Perazzo. P1 - Noite.
** Data : 18/09/23
** Observações:
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float m3, litros;

    printf(" Digite um volume em metros cúbicos (m³): ");
    scanf("%f", &m3);
    fflush(stdin);

    litros = m3*1000;

    printf("\n %.2f m³ equivale a %.2f litros.", m3, litros);

    return 0;
}