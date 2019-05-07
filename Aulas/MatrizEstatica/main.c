#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **sala;
    int fila, pos;
    int filas = 10, poltronas = 30;

    sala = (int **)malloc(filas*sizeof(int *));
    for(int linhas = 0; linhas<filas;linhas++){
        sala[linhas] = (int *) malloc(poltronas * sizeof(int));
    }
    for(int x = 0; x<filas; x++){
        for(int y = 0; y<poltronas; y++){
            sala[x][y] = 0;
        }
    }

    do{
        system("cls");
        printf("Fileira: ");
        scanf("%d",&filas);
        printf("Posicao: ");
        scanf("%d", &poltronas);

        if(filas <0 || poltronas <0) break;

        if(sala[filas][poltronas] == 0){
            sala[filas][poltronas] = 1;
            printf("Reserva efetuada com sucesso!\n\n");
        }
        else
        {
            printf("Maquina indisponivel!\n\n");
        }
        system("pause");

    }while(filas>=0);
    system("cls");

    for(int x = 0; x<filas; x++){
        for(int y = 0; y<poltronas; y++){
            printf("%d|",sala[x][y]);
        }
        printf("\n");
    }

    return 0;
}
