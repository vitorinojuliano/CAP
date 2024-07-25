#include <stdio.h>

int main() {
    // Código do programa
    int vetor[4], valor4, valor3, valor2, valor1, i;
    // Lendo os valores
    scanf("%d %d %d %d", &valor1, &valor2, &valor3, &valor4);
    // Atribuindo os valores ao vetor
    vetor[0] = valor1;
    vetor[1] = valor2;
    vetor[2] = valor3;
    vetor[3] = valor4;
    // laco para imprimir os valores
    for (i = 0; i < 4; i++){
        // Se o valor for 1 se torna a posição do vetor
        if (vetor[i] == 1 )
            printf("%d\n", i+1);
    } 

    return 0;
}