/*
** Função : Calcula o volume de um cilindro.
** Autor : João Victor Barbosa Perazzo. P1 - Noite.
** Data : 18/09/23
** Observações:
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float raio, altura, volume;
    float pi = 3.141592653;

    printf(" Digite o raio (r) do cilindro em centímetros (cm): ");
    scanf("%f", &raio);
    fflush(stdin);

    printf(" Digite a altura (h) do cilindro em centímetros (cm): ");
    scanf("%f", &altura);
    fflush(stdin);

    volume = pi*(raio*raio)*altura;

    printf("\n O volume do cilindro é igual a %.2f cm³", volume);

    return 0;
}