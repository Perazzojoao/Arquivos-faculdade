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
