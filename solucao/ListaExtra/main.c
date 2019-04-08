#include <stdio.h>
#include <stdlib.h>

int main()
{
    int jogo[10];
    int resultado[6];
    int loteria[6];
    int numeros =0;

    printf("Digite 10 valores inteiros aleatorios entre 1 e 60:\n");

    for(int i=0;i<10;i++){

        scanf("%i",&jogo[i]);
        printf("Digitou :%i\n",jogo[i]);
    }

    srand(time(NULL));
    for(int j=0;j<6;j++){

        resultado[j] = 1+ rand()%60;
        printf("\naleatorio :%i",resultado[j]);
    }

    for(int i=0;i<6;i++){

        for(int j=0;j<10;j++){


            if(jogo[i]==resultado[j]){
            int m;
            loteria[m]=resultado[j];

            numeros++;

            }
        }
    }
    if (loteria[]==6){

      printf("Sena:%i",loteria[m]);
    }else if (loteria[m]==5){

      printf("Quina:%i",loteria[m]);
    }else if (loteria[m]==4){

      printf("Quadra:%i",loteria[m]);
    }




    return 0;
}
