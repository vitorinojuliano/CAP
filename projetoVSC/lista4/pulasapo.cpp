#include <stdio.h>
#include <math.h>

int main(){
    int pulo, ncanos;
    int canoatual, canoseguinte,i;
    int valido = 1;

    // lendo variaveis 
    scanf("%d %d", &pulo, &ncanos);
    scanf("%d", &canoatual);

    // laco de 0 ate ncanos-1 e valido != zero
    for( i=0; i<ncanos-1 && valido; i++){
        scanf("%d", &canoseguinte);
        // se a diferenca for maior que o pulo entao para porque o valido sera falso no for.
        if (abs(canoatual - canoseguinte)>pulo){
            valido=0;
        }
        canoatual = canoseguinte;

    }
    // fora do laco e apresenta o resultado caso valido != 0 entao e verdadeiro.
    if(valido){
        printf("YOU WIN\n");
    }
    else{
        printf("GAME OVER\n");
    }

}