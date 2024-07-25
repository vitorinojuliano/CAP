#include <stdio.h>

int main(){
    // Vetor de 20 elementos e um auxiliar
    int i, j, vetor[20], aux[20] = {0}, cont=19;
    // Preenchendo o vetor usando um contador decrescente
    for (i = 0; i < 20; i++){
        scanf("%d", &vetor[i]);
        aux[cont] = vetor[i];
        cont--;
    }
    // Imprimindo o vetor auxiliar preenchido ao contrário
    for (j = 0; j < 20; j++){
        printf("N[%d] = %d\n", j, aux[j]);
    }
    return 0;
}