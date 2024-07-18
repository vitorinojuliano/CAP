#include <stdio.h>
#include <math.h>

int main(){
    int pulo, ncanos;
    int canoatual, canoseguinte,i;
    int valido = 1;

    scanf("%d %d", &pulo, &ncanos);
    scanf("%d", &canoatual);

    for( i=0; i<ncanos-1 && valido; i++){
        scanf("%d", &canoseguinte);
        if (abs(canoatual - canoseguinte)>pulo){
            valido=0;
        }
        canoatual = canoseguinte;

    }
    if(valido){
        printf("YOU WIN\n");
    }
    else{
        printf("GAME OVER\n");
    }

}