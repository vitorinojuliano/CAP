#include <stdio.h>

int main(){
    float nota, media;
    int contador, nova;
    // declaro as variaveis
    nota =0.0;
    media = 0.0;
    nova = 1;
    contador = 0;
    // se nova for 2 acaba o loop
    while (nova !=2){
        

        scanf("%f", &nota);
        // Garante que as notas colocadas sejam de um intervalo valido 
        if (nota >= 0.0 && nota <= 10.0){
            // adiciona a media e adiciona um no contador
            media += nota;
            contador++; 
            
        }
        else{
            // caso nao seja valida
            printf("nota invalida\n");
        }

        // quando tiver duas notas validas
        while (contador == 2)
        {   // imprime a media
            printf("media = %.2f\n", media/2);

            do
            {   // pergunta se quer um novo codigo
                printf("novo calculo (1-sim 2-nao)\n");
                scanf("%d", &nova);
            // garante que as resposta sera entre 1 ou 2
            } while (nova != 1 && nova!=2);
            
            // zera as variaveis para um novo calculo se necessario
            contador = 0;
            media = 0.0;

        }  

    }
    return 0;
    
}