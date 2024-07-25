#include <stdio.h>

int main(){
    float vetor[100], valor;
    // Lendo os valores e preenchendo o vetor com 100 elementos
    for (int i = 0; i < 100; i++){
        scanf("%f", &valor);
        vetor[i] = valor;
    }
    // Imprimindo os valores menores ou iguais a 10
    for (int i = 0; i < 100; i++){
        if (vetor[i] <= 10)
            printf("A[%d] = %.1f\n", i, vetor[i]);
    }
    return 0;
}