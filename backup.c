#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int gerTab_Aleatorio(){
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

    i = rand() % 6;
    j = rand() % 4;
    while(pos < 24){
        i = rand() % 6;
        j = rand() % 4;
        while(tabuleiro[i][j] == 'X'){
            tabuleiro[i][j] = cartas[pos];
             pos++;
        }
    return(tabuleiro[i][j]);
    }
}

int main()
{
    char tabuleiro[6][4];
    int i, j;

    for(i=0; i<6;i++){
        for(j=0;j<4;j++){
            tabuleiro[i][j] = gerTab_Aleatorio();
        }
    }

    return 0;
}

