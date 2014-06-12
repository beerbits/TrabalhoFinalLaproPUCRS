#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int gerNum_Aleatorio(){
    int x,y,i=0,j=0,cont=0, pos;
    int cartas[24];
    int tabuleiro[6][4];

    srand(time(NULL));


    for(x=0;x<6;x++){
        for(y=0;y<4;y++){
            tabuleiro[x][y] = 0;
            printf("%i",tabuleiro[x][y]);
        }
        printf("\n");
    }


    cartas[0] = 1;
    cartas[1] = 1;
    cartas[2] = 2;
    cartas[3] = 2;
    cartas[4] = 3;
    cartas[5] = 3;
    cartas[6] = 4;
    cartas[7] = 4;
    cartas[8] = 5;
    cartas[9] = 5;
    cartas[10] = 6;
    cartas[11] = 6;
    cartas[12] = 7;
    cartas[13] = 7;
    cartas[14] = 8;
    cartas[15] = 8;
    cartas[16] = 9;
    cartas[17] = 9;
    cartas[18] = 10;
    cartas[19] = 10;
    cartas[20] = 11;
    cartas[21] = 11;
    cartas[22] = 12;
    cartas[23] = 12;


    while(cont != 23){
        if(tabuleiro[i][j] != 0){
            i = rand() % 6;
            j = rand() % 4;
            tabuleiro[i][j] = cartas[pos];
            i++;
            pos++;
        }


    }



}

int main()
{
/*    int matriz[6][4], i, j;

    for(i=0; i<6;i++){
        for(j=0;j<4;j++){
            matriz[i][j]= gerNum_Aleatorio();
        }
    }
  printf("yuri arrombado");
*/
    gerNum_Aleatorio();
    return 0;
}
