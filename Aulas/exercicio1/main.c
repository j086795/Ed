#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

int main()
{
   int i;
   int x1[]={6,6,7,8,9,12};
   int x2[]={6,7,8,2,3};
   int qtd = 0;
   int *vUniao;
   vUniao=uniao(x1,x2,5,4,&qtd);


   carregaDados(5);

}
