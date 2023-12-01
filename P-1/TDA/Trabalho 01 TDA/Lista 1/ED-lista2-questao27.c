/*
** Fun��o : Calcula o sal�rio l�quido de um professor.
** Autor : Jo�o Victor Barbosa Perazzo. P1 - Noite.
** Data : 18/09/23
** Observa��es:
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int n_aulas_mes;
    float hora_aula, desconto_inss, salario_liquido;

    printf(" Informe o valor da sua hora-aula: R$");
    scanf("%f", &hora_aula);
    fflush(stdin);

    printf("\n Informe a quantidade de aulas por m�s: ");
    scanf("%i", &n_aulas_mes);
    fflush(stdin);

    printf("\n Informe o desconto do INSS: ");
    scanf("%f", &desconto_inss);
    fflush(stdin);

    salario_liquido = hora_aula*((float)n_aulas_mes)*(1-desconto_inss);

    printf("\n\n O valor do seu sal�rio l�quido � R$%.2f", salario_liquido);

    return 0;
}