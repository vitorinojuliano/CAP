#include <stdio.h>

int main(){
    float entrada, media;
    int contador;
    //declarando variaveis
    contador = 0;
    media = 0;
    // loop de 6 numeros
    for (int i =0; i < 6; i++){
        // solicita 6 numeros
        scanf("%f", &entrada);
        // verifica se e positivo
        if (entrada >= 0){
            // adiciona a media e adiciona 1 ao contador
            media += entrada;
            contador++;
        }
    }
    //calculo de media
    media /= contador;
    
    printf("%d valores positivos\n", contador);
    printf("%.1f\n", media);

    return 0;
}