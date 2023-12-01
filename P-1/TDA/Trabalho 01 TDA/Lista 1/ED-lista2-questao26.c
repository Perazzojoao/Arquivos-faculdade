/*
** Função : Informa quanto tempo se passou desde o início de um experimento.
** Autor : João Victor Barbosa Perazzo. P1 - Noite.
** Data : 18/09/23
** Observações:
*/

#include <stdio.h>
#include <time.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int hora, min, seg, seg_inicial;

    printf(" Informe a hora do início do experimento:\n\n");

    printf(" Hora: ");
    scanf("%i", &hora);
    fflush(stdin);

    printf(" Minutos: ");
    scanf("%i", &min);
    fflush(stdin);

    printf(" Segundos: ");
    scanf("%i", &seg);
    fflush(stdin);

    printf("\n Informe qunto tempo durou o experimento em segundos (s): ");
    scanf("%i", &seg_inicial);

    seg += seg_inicial;


    if (seg>=60)
    {
        double resto;
        int diferenca;

        min += seg/60;
        diferenca = seg/60;
        resto = ((double)seg/60) - diferenca;
        seg = resto * 60;

        if (min>=60)
        {
            hora += min/60;
            diferenca = min/60;
            resto = ((double)min/60) - diferenca;
            min = resto * 60;
        }
    }

    printf("\n O experimento terminou às %ih : %imin : %is", hora, min, seg);

    return 0;
}