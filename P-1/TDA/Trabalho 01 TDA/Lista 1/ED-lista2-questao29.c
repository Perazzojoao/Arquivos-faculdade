/*
** Função : Calcula a velocidade usando a equação de Torricelli.
** Autor : João Victor Barbosa Perazzo. P1 - Noite.
** Data : 18/09/23
** Observações:
*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float v_inic, v_final, a, distancia;

    printf(" Informe os seguintes dados:\n");
    printf(" Velocidade inicial (m/s): ");
    scanf("%f", &v_inic);
    printf(" Aceleração do corpo (m/s²): ");
    scanf("%f", &a);
    printf(" Distância percorrida (m): ");
    scanf("%f", &distancia);

    v_final = sqrt(pow(v_inic,2)+(2*a*distancia));

    printf(" A velocidade final é %.2f m/s", v_final);

    return 0;
}