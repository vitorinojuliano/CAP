#include <stdio.h>

int main(){

    int entrada, contador;
    contador = 0;
    for (int i =1; i <6; i++){
        scanf("%d", &entrada);
        
        if (entrada%2 == 0 ){
            contador++;
        }
    }
    printf("%d valores pares\n", contador);
    return 0;

}