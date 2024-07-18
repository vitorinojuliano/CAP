#include <stdio.h>

int main(){
    int i, j, maior, menor;
    maior = 7;
    menor = 5;
    for (i = 1; i <= 9; i+=2){
        for (j = maior; j>=menor; j--){
           printf("I=%i J=%d\n",i,j);
        }
        maior+=2;
        menor+=2;
    }
    return 0;
}