/*
** Fun��o : Converte coordenadas polares em coordenadas cartesianas.
** Autor : Jo�o Victor Barbosa Perazzo - P1 Noite
** Data : 28/09/2023
** Observa��es: A fun��o sin() e cos() recebem graus em radianos como par�metro, por isso a nessecidade da convers�o.
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
  printf(" �ngulo: ");
  scanf("%f", &a);
  fflush(stdin);
  printf("\n");

  float rad = a * pi / 180;

  float coordenadaX = r * (cos(rad));
  float coordenadaY = r * (sin(rad));

  printf(" As coordenadas convertidas s�o: (%.2f; %.2f)", coordenadaX, coordenadaY);
  printf(" seno = %.2f  cosseno = %.2f", sin(rad), cos(rad));

  return 0;
}