#include <stdio.h>

int main() {
    // Código do programa
    int vetor[4], valor, i;
    // Lendo os valores e cadiocionando no vetor
   for (i=0; i<4;i++){
    scanf("%d", &valor);
    vetor[i]=valor;
   }
    // laco para imprimir os valores
    for (i = 0; i < 4; i++){
        // Se o valor for 1 se torna a posição do vetor
        if (vetor[i] == 1 )
            printf("%d\n", i+1);
    } 

    return 0;
}