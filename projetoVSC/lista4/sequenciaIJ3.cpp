#include <stdio.h>

int main(){
    int i, j, maior, menor;
    // variaveis iniciais 
    maior = 7;
    menor = 5;
    for (i = 1; i <= 9; i+=2){
        // executa esse laco com as variaveis 
        for (j = maior; j>=menor; j--){
           printf("I=%i J=%d\n",i,j);
        }
        // incrementa esse valores e executa novamente o primeiro laco
        maior+=2;
        menor+=2;
    }
    return 0;
}