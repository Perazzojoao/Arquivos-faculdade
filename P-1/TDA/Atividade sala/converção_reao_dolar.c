#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "portuguese");
	
	float real, dolar;
	float r=4.93;
	
	printf (" Valor em reais: ");
	scanf ("%f", &real);
	fflush (stdin);
	
	dolar = real/r;
	
	printf ("\n Valor convertido para d�lar: %.2f", dolar);
	
	return 0;
}
