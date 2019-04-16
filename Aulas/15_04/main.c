#include <stdio.h>
#include <stdlib.h>


void impreVetFloat(float *v,int nMedias){

for (int i=0;i<nMedias;i++)

    printf("\n%5.2f ",v[i]);


}
int main()
{
    float *vMedias;
    unsigned int nMedias=0;

    printf("Nr. de alunos: ");
    scanf("%d",&nMedias);

    vMedias = malloc(nMedias * sizeof(float));
    if(vMedias == NULL)
    {
        printf("Falha ao alocar memoria");
    }


    for (int i=0; i<nMedias;i++)

    scanf("%f",&vMedias[i]);

    impreVetFloat(vMedias,nMedias);

    free(vMedias);

    return 0;
}
