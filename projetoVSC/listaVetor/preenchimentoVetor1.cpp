#include <stdio.h>

int main(){
    // Vetor de 10 elementos
    int i, vetor[10], valor;
    scanf("%d", &valor);
    // Preenchendo o vetor
    for (i = 0; i < 10; i++){
        // Se for a primeira posição do vetor
        if (i == 0)
            vetor[i] = valor;
        else{
            // Multiplicando o valor por 2
            valor = valor * 2;
            vetor[i] = valor;
        }
        // Imprimindo o vetor
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }
    return 0;
}