#include <stdio.h>

int main(){
    int entrada;

    scanf("%d", &entrada);
    // de 1 ate entrada pulando de 1 em 1
    for (int i = 0; i <= entrada; i++) { 
        // numero, ao quadrado, ao cubo
        printf("%d %d %d\n", i, i*i, i*i*i);
    }

    return 0;
}