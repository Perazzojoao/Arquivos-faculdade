/*
** Fun��o : Converte uma temperatura de graus Celsius para graus Fahrenheit.
** Autor : Jo�o Victor Barbosa Perazzo. P1 - Noite.
** Data : 18/09/23
** Observa��es:
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float celsius, fahrenheit;

    printf(" Digite uma temperatura em graus Celsius: ");
    scanf("%f", &celsius);
    fflush(stdin);

    fahrenheit = (celsius*9/5)+32;

    printf("\n %.2f�C � igual � %.2f�F\n\n", celsius, fahrenheit);

    return 0;
}