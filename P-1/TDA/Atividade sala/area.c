#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "portuguese");
	
	float comprimento, largura, area, peri;
	
	printf (" Digite o comprimento: ");
	scanf ("%f", &comprimento);
	
	printf ("\n Digite a largura: ");
	scanf ("%f", &largura);
	
	area = comprimento*largura;
	peri = (comprimento*2)+(largura*2);
		
	printf ("\n\n �rea do ret�ngulo: %.2f m�", area);
	
	printf ("\n\n Per�metro do ret�ngulo: %.2f cm", peri);
	
	return 0;
}
