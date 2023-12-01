/*
** Função : Converte um número de radianos para graus.
** Autor : João Victor Barbosa Perazzo. P1 - Noite.
** Data : 18/09/23
** Observações:
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float graus, rad;
    double pi = 3.141592653;

    printf (" Digite um ângulo em radianos: ");
    scanf ("%f", &rad);
    fflush(stdin);

    graus = (rad*180)/pi;

    printf ("\n %.2f rad é igual a %.2f°.\n\n", rad, graus);

    return 0;
}