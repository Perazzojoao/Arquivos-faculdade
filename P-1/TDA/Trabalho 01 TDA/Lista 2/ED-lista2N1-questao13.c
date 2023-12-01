/*
** Função : Converte coordenadas polares em coordenadas cartesianas.
** Autor : João Victor Barbosa Perazzo - P1 Noite
** Data : 28/09/2023
** Observações: A função sin() e cos() recebem graus em radianos como parâmetro, por isso a nessecidade da conversão.
*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "");

  float r, a;
  const double pi = 3.141592654;

  printf(" Digite as coordenadas polares abaixo:\n");
  printf(" Raio: ");
  scanf("%f", &r);
  fflush(stdin);
  printf(" Ângulo: ");
  scanf("%f", &a);
  fflush(stdin);
  printf("\n");

  float rad = a * pi / 180;

  float coordenadaX = r * (cos(rad));
  float coordenadaY = r * (sin(rad));

  printf(" As coordenadas convertidas são: (%.2f; %.2f)", coordenadaX, coordenadaY);
  printf(" seno = %.2f  cosseno = %.2f", sin(rad), cos(rad));

  return 0;
}