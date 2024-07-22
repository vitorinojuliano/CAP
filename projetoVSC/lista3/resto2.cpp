#include <stdio.h>

int main(){
    int entrada;

    scanf("%d", &entrada);
    //loop de dez mil numeros
    for (int i = 1; i <10001; i++){
        // se resto da divisao for 2 imprime o i
        if (i%entrada == 2){
            printf("%d\n", i);

        }
    }
    return 0;
}