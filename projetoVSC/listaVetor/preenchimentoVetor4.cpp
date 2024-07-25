#include <stdio.h>

int main(){
    int i, j, par[5], impar[5], valor, contPar = 0, contImpar = 0;
    // ler 15 valores
    for (i = 0; i<15; i++){
        scanf("%d", &valor);
        // se o valor for par
        if (valor % 2 == 0){
            par[contPar] = valor;
            contPar++;
        }
        // se o valor for impar
        else{
            impar[contImpar] = valor;
            contImpar++;
        }
        // se o contador for igual a 5
        if (contPar == 5){
            for (j = 0; j < 5; j++){
                printf("par[%d] = %d\n", j, par[j]);
            }
            contPar = 0;
        }
        // se o contador for igual a 5
        if (contImpar == 5){
            for (j = 0; j < 5; j++){
                printf("impar[%d] = %d\n", j, impar[j]);
            }
            contImpar = 0;
        }
    }
    // Imprimindo os valores restantes impares e pares
    for (i = 0; i < contImpar; i++){
        printf("impar[%d] = %d\n", i, impar[i]);
    }
    for (i = 0; i < contPar; i++){
        printf("par[%d] = %d\n", i, par[i]);
    }
    
    return 0;
}