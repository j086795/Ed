#include <stdio.h>
#include <stdlib.h>
#include "alocacao.h"

int main()
{
    int x1[5] = {1,3,5,6,7};
    int x2[7] = {1,3,4,5,6,7,8};
    int *qtd;

    uniao(&x1,&x2,5,7,&qtd);
    printf("%d",qtd);

   interseccao (&x1,&x2,5,7,&qtd);
   printf("\n%d",qtd);

    return 0;
}
