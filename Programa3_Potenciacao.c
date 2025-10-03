#include <stdlib.h>
#include <stdio.h>

int main()
{
        int vBase = 0;
        int expo = 0;
        int i = 0;
        int resp = 0;
        int opcao = 0;

    while(opcao == 0){
        system("cls");
        //get da base e do expoente
        printf("Insira o valor da base\n");
        scanf("%d", &vBase);
        printf("Insira ate quanto ira seu expoente\n");
        scanf("%d", &expo);
        resp = vBase;
        //calculo do expo
        for(i=1; i < expo; i++){
            resp = resp * vBase;
        }
    //mostrando resultado
    printf("=================\nO resultado e %2d\n=================\n", resp);

    printf("Deseja continuar com o programa?\nInsira 0(sim) e 1(nao)\n");
    scanf("%d", opcao);
    }
    return 0;
}
