#include <stdio.h>

int main(){
    // Declarando um vetor de 10 elementos todos zerados
    int X[10] = {0};
    // vai de 0 a 9
    for (int i = 0; i < 10; i++)
    {
        // ler cada 10 numeros e armazena em ordem 
        scanf("%d", &X[i]);

        // condiucao para quando for menor ou igual a zero vira 1
        if (X[i]<=0)
            X[i] = 1;
        // imprime o elemento do for e respectivo numero do vetor 
        printf("X[%d] = %d\n",i, X[i]);
    }
    return 0;
}