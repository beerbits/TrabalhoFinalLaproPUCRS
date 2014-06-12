#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int geraNumero_Aleatorio(tam){
    int i=0;
    i = rand() % tam;

    return(i);
    }



int main()
{
    int x,y,i=0,j=0,cont=0, pos=0;
    char cartas[24];
    char tabuleiro[6][4];

    srand(time(NULL));


    for(x=0;x<6;x++){
        for(y=0;y<4;y++){
            tabuleiro[x][y] = 'X';
        }
    }


    cartas[0] = 'A';
    cartas[1] = 'A';
    cartas[2] = 'B';
    cartas[3] = 'B';
    cartas[4] = 'C';
    cartas[5] = 'C';
    cartas[6] = 'D';
    cartas[7] = 'D';
    cartas[8] = 'E';
    cartas[9] = 'E';
    cartas[10] = 'F';
    cartas[11] = 'F';
    cartas[12] = 'G';
    cartas[13] = 'G';
    cartas[14] = 'H';
    cartas[15] = 'H';
    cartas[16] = 'I';
    cartas[17] = 'I';
    cartas[18] = 'J';
    cartas[19] = 'J';
    cartas[20] = 'K';
    cartas[21] = 'K';
    cartas[22] = 'L';
    cartas[23] = 'L';

    i = geraNumero_Aleatorio(6);
    j = geraNumero_Aleatorio(4);
    while(pos < 24){
        i = geraNumero_Aleatorio(6);
        j = geraNumero_Aleatorio(4);
        while(tabuleiro[i][j] == 'X'){
            tabuleiro[i][j] = cartas[pos];
            pos++;
        }
    }


    for(x=0;x<6;x++){
        for(y=0;y<4;y++){
            printf("[%c]\t",tabuleiro[x][y]);
        }
        printf("\n");
    }


    return 0;
}
