#include <stdio.h>

int main(){
    int entrada, contador;

    contador =0;
    scanf("%d", &entrada);
    while (contador <6)
    {
        if (entrada%2 == 0){
            entrada++;
        }
        else{
            printf("%d\n", entrada);
            contador++;
            entrada++;
        }
    }

    return 0;
}