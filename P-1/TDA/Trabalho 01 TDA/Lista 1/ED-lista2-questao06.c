/*
** Fun��o : Soma de 3 valores inteiros.
** Autor : Jo�o Victor Barbosa Perazzo. P1 - Noite.
** Data : 18/09/23
** Observa��es:
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int v1, v2, v3;

    printf(" Digite 3 valores inteiros: ");
    scanf("%i %i %i", &v1, &v2, &v3);
    fflush(stdin);

    int soma = v1+v2+v3;

    printf("\n O somat�rio de %i, %i e %i �: %i\n\n", v1, v2, v3, soma);

    return 0;
}