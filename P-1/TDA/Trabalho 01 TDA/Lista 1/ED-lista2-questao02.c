/*
** Função : Converte velocidade de km/h para m/s.
** Autor : João Victor Barbosa Perazzo. P1 - Noite.
** Data : 11/09/23
** Observações:
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "portuguese");
	
	float km, ms;
	
	printf (" Informe a velocidade em km/h: ");
	printf (" ");
	scanf ("%f", &km);
	fflush (stdin);
		
	ms = km/3.6;
	
	printf ("\n\n Velocidade convertida: %.2f m/s.", ms);
	
	
	return 0;
}