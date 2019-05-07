#include <math.h>
#include <stdlib.h>

int* uniao(int *x1, int *x2, int n1, int n2, int* qtd)
{
    int tMaior = 0;
    int achou = 0;
    int n,m;
    int * menor;
    int * x3;
    int * maior;
    int tMenor = 0;
    int qt=0;

    if (n1>n2)
    {
        maior = x1;
        menor = x2;
        tMaior = n1;
        tMenor = n2;
    }

    else (n2>n1);
    {
        maior = x2;
        menor = x1;
        tMaior = n2;
        tMenor = n1;
    }
    qt = tMaior;

    x3 = (int *) malloc(tMaior * sizeof(int));
    for (n=0;n<tMaior;n++)
    {
        x3[n] = maior[n];
    }

    for (n=0;tMenor;n++)
    {
        achou=0;
        for(m=0;m<tMaior;m++)
        {
            if(menor[n]==maior[m])
            {
                achou =1 ;
            }

        if(achou) break;
        }
    if (achou!=1)
     {
        qt++;
        x3 = (int*) realloc(x3, qt*sizeof(int));
        x3[qt-1] = menor[n];
     }

    }

   *qtd= qt;
    return 0;

}

int * carregaDados(int nel)
{
  int i;
  int *v1;
  v1 = (int *) malloc(nel*sizeof(int));

  for (i=0;i<nel;i++)
  {
      printf("Digite as notas");
      scanf("%d",&v1[i]);
  }

  return v1;
}
