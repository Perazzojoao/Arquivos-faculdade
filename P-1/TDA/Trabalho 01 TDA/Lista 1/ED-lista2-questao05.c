/*
** Função : Converte um valor em Real para Dólar americano.
** Autor : João Victor Barbosa Perazzo. P1 - Noite.
** Data : 11/09/23
** Observações:
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "portuguese");
	
	float real, dolar;
	float r=4.93;
	
	printf (" Valor em reais: R$");
	scanf ("%f", &real);
	fflush (stdin);
	
	dolar = real/r;
	
	printf ("\n Valor convertido para dólar: $%.2f", dolar);
	
	return 0;
}