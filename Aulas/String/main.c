#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"



int isNumeric (char c){

    if ((c>='0') && (c<='9'))
    {
        return 1;
    }else
        return 0;
    }

int isCaractere(char c){

     if (((c>='A') && (c<='Z')) || ((c>='a') && (c<='z')))
    {
        return 1;
    }else
        return 0;

}

char maiuscula(char c){

    if (((c>='a') && (c<='z')))
    return c -32;

}


char * paraMinuscula(char * c){

    for (int n=0; c[n]!='\0';n++){

        if((c[n]>65) && (c[n]<=90))
        c[n] += 32;
    }
    return c;
}
int main(int q, char **v)
{
    int i;
    for(i=0;i<q;i++)
        printf("%s\n", v[i]);


    // Exemnplo de Matriz
    int teste[10][2];

    teste[0][0] = 1;
    teste[0][1] = 2;
    teste[1][0] = 3;
    teste[1][1] = 4;
    int count = 0;
    for(int i = 0; i<10;i++){
        for(int x = 0; x<2;x++){
            teste[i][x] = count;
            printf("%d\n", teste[i][x]);
            count++;
        }
    }

    char nome[50] = "";

    printf("Nome: ");
    gets(nome);
    printf("Nome Digitado: %s",nome);

    /*
    char nome[50];
    char pref[7] = "Prof. ";
    char nomeCompleto[50] = "";
    strcpy(nome,"Julio");
    strcat(nomeCompleto,pref);
    strcat(nomeCompleto,nome);
    printf("Nome = %s", paraMinuscula(nomeCompleto));
    */

    /*nome[0] = 'J';
    nome[1] = 'u';
    nome[2] = 'l';
    nome[3] = 'i';
    nome[4] = 'o';
    nome[5] = '\0';
    */


    /*
    char c = 'a';

    printf("Digite um digito numerico\n");
    scanf("%c",&c);
    printf("Maiuscula: %c",maiuscula(c));
    /*if (isNumeric(c)){

        printf("Blza!");
    }else{

    printf("Eu disse numerico!\n");
    printf("Numerico: 1,2,3....\n");

    }
    */

    /*if (isCaractere(c)){

        printf("Correto!");
    }else{

    printf("Eu pedi um caractere nao numerico!\n");

     }
     */


    return 0;
}
