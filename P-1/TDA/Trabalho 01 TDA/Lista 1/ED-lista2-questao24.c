/*
** Função : Converte tempo em segundos (s) para horas (h), minutos (min) e segundos (s).
** Autor : João Victor Barbosa Perazzo. P1 - Noite.
** Data : 18/09/23
** Observações:
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int horas=0, min=0, seg=0;

    printf(" Digite um valor inteiro em segundos: ");
    scanf("%i", &seg);
    fflush(stdin);

    int seg_inicial=seg;
    double resto=0.0;
    
    horas = seg/3600;
    resto = ((double)seg/3600)-horas;

    if ((seg%3600)!=0)
    {
        min = resto*60;
        resto = (resto*60)-min;

        if (min>=60)
        {
            horas++;
            min = min - 60;
        }
    }
    seg = resto*60;

    printf(" %is equivale a %ih : %imin : %is",seg_inicial, horas, min, seg);

    return 0;
}