/*
** Fun��o : Converte uma temperatura de graus Kelvin para graus Celsius.
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

    printf(" Digite uma temperatura em graus Kelvin: ");
    scanf("%f", &kelvin);
    fflush(stdin);

    celsius = kelvin-273.15;

    printf("\n %.2f�K � igual � %.2f�C\n\n", kelvin, celsius);

    return 0;
}