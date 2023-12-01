/*
** Fun��o : Executa lan�amentos de dados e mostra o somat�rio ao usu�rio.
** Autor : Jo�o Victor Barbosa Perazzo
** Data : 13/11/2023
** Observa��es:
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

#define LADOS 6

int main() {
    setlocale(LC_ALL, "Portuguese");

    int lancamentos;

    printf("Digite o n�mero de vezes que os dados ser�o lan�ados: ");
    scanf("%d", &lancamentos);
    fflush(stdin);
    printf("\n");

    int frequencias[LADOS] = {0};
    srand(time(NULL));

    printf("Jogada\tDado 1\tDado 2\tSoma\n");

    for(int i = 1; i <= lancamentos; i++) {
        int dado1 = (rand() % LADOS) + 1;
        int dado2 = (rand() % LADOS) + 1;
        int soma = dado1 + dado2;
        
        frequencias[dado1 - 1]++;
        frequencias[dado2 - 1]++;
        
        printf("%d\t%d\t%d\t%d\n", i, dado1, dado2, soma);
    }

   
    printf("\n   Tabela de Frequ�ncias\n");
    printf("================================\n");
    printf("Face\tQuantidade\n");
    printf("================================\n");

    for(int i = 0; i < LADOS; i++) {
        printf("%d\t%d vezes\n", i + 1, frequencias[i]);
    }
    printf("================================\n");

    
    printf("\nAs tr�s faces mais sorteadas:\n");
    for(int i = 0; i < 3; i++) {
        int maxIndex = 0;
        for (int j = 0; j < LADOS; ++j) {
            if (frequencias[j] > frequencias[maxIndex]) {
                maxIndex = j;
            }
        }
        printf("Face %d: %d vezes\n", maxIndex + 1, frequencias[maxIndex]);
        frequencias[maxIndex] = 0; 
    }
    return 0;
}