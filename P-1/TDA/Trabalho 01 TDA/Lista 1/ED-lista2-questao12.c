/*
** Fun��o : Converte uma temperatura de graus Celsius para graus Kelvin.
** Autor : Jo�o Victor Barbosa Perazzo. P1 - Noite.
** Data : 18/09/23
** Observa��es:
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float celsius, kelvin;

    printf(" Digite uma temperatura em graus Celsius: ");
    scanf("%f", &celsius);
    fflush(stdin);

    kelvin = celsius + 273.15;

    printf("\n %.2f�C � igual � %.2f�K\n\n", celsius, kelvin);

    return 0;
}