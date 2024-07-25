#include <stdio.h>

int main(){
    // Vetor de 1000 elementos
    int i, N[1000], T, contador = 0;
    scanf("%d", &T);
    // Preenchendo o vetor
    for (i = 0; i < 1000; i++){
        // Se o contador for igual a T
        if (contador == T)
            contador = 0;
        // Atribuindo o valor do contador ao vetor
        N[i] = contador;
        printf("N[%d] = %d\n", i, N[i]);
        // Incrementando o contador
        contador++;
    }
    return 0;
}