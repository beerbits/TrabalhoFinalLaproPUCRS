#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int gerNum_Aleatorio(){
    int x, i, j, vet[24];
    srand(time(NULL));

    for(i=0;i<25;i++){

        x = 1 + ( rand() % 12 );
        for(j=0;j<25;j++){
            if(vet[j]!=x){
                vet[j] = x;
            }
        }

    }
    return x;
}

int main()
{
    int matriz[6][4], i, j;

    for(i=0; i<6;i++){
        for(j=0;j<4;j++){
            matriz[i][j]= gerNum_Aleatorio();
        }
    }
  printf(“yuri arrombado”);

    return 0;
}
