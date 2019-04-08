#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 5;
    int b = 8;

    int vA[a] = {2,3,4,5,6};
    int vB[b] = {4, 6, 7, 8, 9, 10, 11, 12};

    printf("Vetor A:\n");

    for(int n=0;n<vA[n];n++){

        printf("%i ", vA[n]);
    }

    printf("\n\nVetor B:\n");

    for(int j=0;j<vB[j];j++){

        printf("%i ", vB[j]);
    }

    printf("\n\nVetores em comum: \n");

    for(int i=0;i<vA[i];++i){

        for(int j=0;j<vB[j];++j){

            if(vA[i]==vB[j]){

                printf("%i ",vA[i]);
            }
        }
    }

    return 0;
}
