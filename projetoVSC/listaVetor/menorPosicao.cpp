#include <stdio.h>

int main(){
    int x, menor, i;
    menor = 0;
    // vetor tem que ser depois do scanf
    scanf("%d", &x);
    int vetor[x];
    // Preenchendo o vetor
    for (i = 0; i < x; i++){
        scanf("%d", &vetor[i]);
        // Se o valor do vetor na posição i for menor que o valor do vetor na posição menor
        if (vetor[i] < vetor[menor])
            menor = i;
    }
    // pode colocar \n no meio do printf
    printf("Menor valor: %d\nPosicao: %d\n", vetor[menor], menor);

    return 0;

}