#include <stdio.h>

int main(){
    float nota, media;
    int contador, nova;

    nota =0.0;
    media = 0.0;
    nova = 1;
    contador = 0;
    while (nova !=2){
        

        scanf("%f", &nota);

        if (nota >= 0.0 && nota <= 10.0){
            media += nota;
            contador++; 
            
        }
        else{
            printf("nota invalida\n");
        }

        while (contador == 2)
        {
            printf("media = %.2f\n", media/2);

            do
            {
                printf("novo calculo (1-sim 2-nao)\n");
                scanf("%d", &nova);
            } while (nova != 1 && nova!=2);

            contador = 0;
            media = 0.0;

        }  

    }
    return 0;
    
}