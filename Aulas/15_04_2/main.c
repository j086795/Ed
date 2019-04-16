#include <stdio.h>
#include <stdlib.h>


float mediaPonderada(float *notas, float *pesos, int nel)
{
    float media = 0;
    float peso = 0;
    for(int n=0;n<nel;n++){

        media += notas[n]*pesos[n];
        peso+=pesos[n];
    }

    return media/peso;
}


int main()
{
    float *notas;
    float *pesos;

    if((notas = malloc(3 * sizeof(float)))==NULL){

        printf("Falha ao alocar vetor de pesos!");
        exit(0);
    }

    if((pesos = malloc(3 * sizeof(float)))==NULL){

        printf("Falha ao alocar vetor de pesos!");
        exit(0);
    }

    notas[0] = 8;
    pesos[0] = 4;
    notas[1] = 6.5;
    pesos[1] = 3;
    notas[2] = 10;
    pesos[2] = 3;

    for(int i=0;i<3;i++){

        printf("%5.2f,",notas[i]);
    }

    for(int i=0;i<3;i++){

        printf("%5.2f, ",pesos[i]);
    }

    float mP = mediaPonderada(notas,pesos,3);
    printf("%5.2f",mP);

    return 0;
}
