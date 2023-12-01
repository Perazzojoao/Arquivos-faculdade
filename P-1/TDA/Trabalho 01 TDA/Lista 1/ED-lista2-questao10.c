/*
** Fun��o : Converte uma temperatura de graus Fahrenheit para graus Celsius.
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

    printf(" Digite uma temperatura em graus Fahrenheit: ");
    scanf("%f", &fahrenheit);
    fflush(stdin);

    celsius = (fahrenheit-32)*5/9;

    printf("\n %.2f�F � igual � %.2f�C\n\n", fahrenheit, celsius);

    return 0;
}