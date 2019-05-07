#include <math.h>

void impreme (float *v1, int nEl)
{
int i;
printf("=======================\n");
for (i=0;i<nEl;i++)
    {
   printf("%5.2f\n", v1[i]);
    }
 printf("=======================\n");
}

int* uniao(int *x1, int *x2, int n1, int n2, int* qtd)
{
    *qtd = n1+n2;
    int i=0,n=0;
    int *x3=(int *) malloc(* qtd * sizeof(int));
        for (i=0; i<n1; i++)
        {
            x3[i] = x1[i];

        }

        for (i=n1;i<n2;i++)
        {
           x3[i] = x2[i];
        }

    return (x3);
}

int* interseccao(int *x1, int *x2, int n1, int n2, int *qtd)
{
     *qtd = n1+n2;
    int i=0,n=0;
    int *x3=(int *) malloc(* qtd * sizeof(int));

        for (i=0; i<n1; i++)
        {
            x3[i] = x1[i];
      }

        for (i=n1;i<n2;i++)
        {
           for (n=0;n<qtd;n++)
           {

            if (x3[i]=x2[n])
             {
                 x3[i]=x2[i-n1];
             }
           else
             {
               continue;
              }
        }
    }
    return (x3);


}

