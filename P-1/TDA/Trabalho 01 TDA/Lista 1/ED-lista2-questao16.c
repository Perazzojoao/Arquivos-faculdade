/*
** Função: Converte um número de graus para radianos.
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

    printf (" Digite um ângulo em graus: ");
    scanf ("%f", &graus);
    fflush(stdin);

    rad = (graus*pi/180);

    printf ("\n %.2f° é igual a %.5f rad.\n\n", graus, rad);

    return 0;
}