#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "portuguese");
	
	float num[5];
	float media=0;
	
	for (int i=0; i<5; i++)
	{
		printf (" Número %i: ", i+1);
		scanf ("%f", &num[i]);
		fflush (stdin);
	}

	for (int i=0; i<5; i++)
	{
		media += num[i];
	}
	
	media /= 5;
	
	printf ("\n");
	printf (" Média: %.2f", media);
	
	return 0;
}
