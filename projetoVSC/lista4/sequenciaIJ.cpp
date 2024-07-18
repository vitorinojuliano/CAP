#include <stdio.h>

int main(){
    
    int j, i;
    // j vai regredir 5 e i vai somando 3 ate j parar
    for (i = 1, j = 60; i && j>=0; i+=3, j-=5){
        printf("I=%d J=%d\n",i,j);
    }
    return 0;
}