int escalar (int *vetor1, int *vetor2, int nElementos)
{
    int total=0.0;
    int n=0;
    for(n=0; n<nElementos; n++)
    {
        total += (vetor1[n]*vetor2[n]);
    }
    return total;
}

int todosDiferentes(int *vetor, int nElementos)
{
    int n=0;
    int m = 0;
    for(n=0; n<nElementos-1; n++)
    {
        for(m=n+1; m<nElementos; m++)
        {
            if(vetor[n]==vetor[m]) return 0;
        }

    }
    return 1;
}

void rotaciona (int *vetor, int nElementos)
{
    int ultimo = vetor[nElementos-1];
    int n=0;
    for(n=nElementos-1; n>0; n--){
        vetor[n]=vetor[n-1];
    }
    vetor[0]=ultimo;
}

int contaValores(int *vetor, int nElemento, int limInf, int limSup)
{
    int n=0;
    int q = 0;
    for(n=0; n<nElemento; n++)
    {
        if(vetor[n]>=limInf && vetor[n]<=limSup)
            q++;
    }
    return q;
}

int menorElemento(int *vetor, int nElementos)
{
    int n=0;
    int menor = vetor[0];
    for(n=1; n<nElementos; n++)
    {
        if(vetor[n]<menor) menor=vetor[n];
    }
    return menor;
}

int maiorElemento(int *vetor, int nElementos)
{
    int n=0;
    int maior = vetor[0];
    for(n=1; n<nElementos; n++)
    {
        if(vetor[n]>maior) maior=vetor[n];
    }
    return maior;
}

int contidos(int *v1, int nElementos1, int *v2, int nElementos2)
{
    int n=0;
    int m=0;
    int q=0;
    for(n=0;n<nElementos2; n++)
    {
        for(m=0; m<nElementos1; m++)
        {
            if(v2[n]==v1[m])
            {
                q++;
                break;
            }
        }
    }
    return q;
}
