/*
** Função : Calcula a quinta parte de um número real.
** Autor : João Victor Barbosa Perazzo. P1 - Noite.
** Data : 18/09/23
** Observações:
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float numero;

    printf(" Digite um número real: ");
    scanf("%f", &numero);
    fflush(stdin);

    float resultado = numero/5;

    printf("\n A quinta parte de %.2f é igual à: %.4f\n\n", numero, resultado);

    return 0;
}