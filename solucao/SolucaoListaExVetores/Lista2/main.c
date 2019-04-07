#include <stdio.h>
#include <stdlib.h>
#include "vetores.h"
void imprimeVetorInt(int * v, int ne)
{
    int n;
    for(n=0; n<ne; n++)
    {
        printf("%d, ", v[n]);
    }
    printf("\n");
}


int main()
{
    int v1[] = {2,3,4,5};
    int v2[]={1,2,1,1};
    printf("1) Escalar = %d\n",escalar(v1,v2,4));
    printf("2) Todos diferentes = %d\n", todosDiferentes(v1,4));
    imprimeVetorInt(v1,4);
    rotaciona(v1,4);
    imprimeVetorInt(v1,4);
    printf("4) Elementos contidos = %d\n", contaValores(v1,4,3,4));
    printf("5) Menor elemento = %d\n", menorElemento(v1,4));
    printf("6) Maior elemento = %d\n", maiorElemento(v1,4));
    printf("7) Elementos contidos = %d\n", contidos(v1,4, v2, 4));
    return 0;
}
