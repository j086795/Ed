#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int jog = 10;
    int result = 6;

    int jogo[jog];
    int resultado[result];
    int loteria[] = {0};
    int numeros =0;

    printf("Digite 10 valores inteiros aleatorios entre 1 e 60:\n");

    for(int i=0;i<jog;i++){

        scanf("%i",&jogo[i]);
    }

    srand(time(NULL));

    for(int j=0;j<result;j++){

        resultado[j] = rand()%60 +1;
        printf("Aleatorio:%i\n",resultado[j]);
    }

    for(int i=0;i<result;i++){

        for(int j=0;j<jog;j++){

            if(jogo[j]==resultado[i]){

            ++numeros;
            break;

            }
        }
    }

    printf("\nAcertos: ",numeros);


    return 0;
}
