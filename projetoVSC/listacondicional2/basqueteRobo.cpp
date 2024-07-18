#include <stdio.h>

int main()
{
    int distancia, pontos;

    scanf("%d",&distancia);
    if (distancia<=800){
        pontos = 1;
    }
    else{
        if (distancia<=1400){
            pontos = 2;
        }
        else{
            pontos = 3;
        }
    }
    printf("%d\n",pontos);
}