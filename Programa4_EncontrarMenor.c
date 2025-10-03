#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetor[15];
    int i, menor;
    srand(time(NULL));

    printf("==============================================\n");
    for (i=0; i < 15; i++)
    {
        vetor[i] = rand() % 100;//numero gerado de 0 a 99
        printf("%3d", vetor[i]);
    }
    printf("\n==============================================\n");

    menor = vetor[0];
    for (i=1; i < 6; i++)
    {
        if (vetor[i] < menor)
        {
        menor = vetor[i];
        }
    }
    printf("\nO menor numero e : %d\n", menor);
    return 0;
}

