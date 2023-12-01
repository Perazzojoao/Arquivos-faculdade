/*
** Função : Lê dois números e informa o dividendo, o divisor, o quociente e o resto do primeiro pelo segundo e do segundo pelo primeiro.
** Autor : João Victor Barbosa Perazzo. P1 - Noite.
** Data : 11/09/23
** Observações:
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "portuguese");
	
	int n1, n2;
	int r1, r2;
	float rest1, rest2;
	
	printf (" Primeiro número: ");
	scanf ("%i", &n1);
	fflush (stdin);
	
	printf ("\n Segundo número: ");
	scanf ("%i", &n2);
	fflush (stdin);
	
	printf ("\n OPERAÇÃO 1: %i/%i\n\n", n1, n2);
	
	r1 = n1/n2;
	rest1 = n1%n2;
	
	printf (" -Dividendo: %i\n", n1);
	printf (" -Divisor: %i\n", n2);
	printf (" -Quociente: %i\n", r1);
	printf (" -Resto: %.0f\n", rest1);
	
	
	printf ("\n OPERAÇÃO 2: %.2f/%.2f\n\n", n2, n1);
	
	r2 = n2/n1;
	rest2 = n2%n1;
	
	printf (" -Dividendo: %i\n", n2);
	printf (" -Divisor: %i\n", n1);
	printf (" -Quociente: %i\n", r2);
	printf (" -Resto: %.0f\n", rest2);
	
	
	return 0;
}