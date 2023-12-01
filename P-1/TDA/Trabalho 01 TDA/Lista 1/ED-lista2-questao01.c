/*
** Fun��o : Recebe 5 valores inteiros e calcula a m�dia.
** Autor : Jo�o Victor Barbosa Perazzo. P1 - Noite.
** Data : 11/09/23
** Observa��es:
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "portuguese");
	
	float num[5];
	float media=0;
	
	for (int i=0; i<5; i++)
	{
		printf (" N�mero %i: ", i+1);
		scanf ("%f", &num[i]);
		fflush (stdin);
	}

	for (int i=0; i<5; i++)
	{
		media += num[i];
	}
	
	media /= 5;
	
	printf ("\n");
	printf (" M�dia: %.2f", media);
	
	return 0;
}