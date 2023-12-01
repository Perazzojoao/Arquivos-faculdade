/*
** Fun��o : Calcula o volume de um cilindro.
** Autor : Jo�o Victor Barbosa Perazzo. P1 - Noite.
** Data : 18/09/23
** Observa��es:
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float raio, altura, volume;
    float pi = 3.141592653;

    printf(" Digite o raio (r) do cilindro em cent�metros (cm): ");
    scanf("%f", &raio);
    fflush(stdin);

    printf(" Digite a altura (h) do cilindro em cent�metros (cm): ");
    scanf("%f", &altura);
    fflush(stdin);

    volume = pi*(raio*raio)*altura;

    printf("\n O volume do cilindro � igual a %.2f cm�", volume);

    return 0;
}