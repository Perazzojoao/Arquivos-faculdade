/*
** Função : Converte uma temperatura de graus Fahrenheit para graus Celsius.
** Autor : João Victor Barbosa Perazzo. P1 - Noite.
** Data : 18/09/23
** Observações:
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

    printf("\n %.2f°F é igual à %.2f°C\n\n", fahrenheit, celsius);

    return 0;
}