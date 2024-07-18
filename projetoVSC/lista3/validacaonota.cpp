#include <stdio.h>

int main()
{
    float nota, media;
    int contador;

    contador = 0;
    media = 0;
    
    while (contador < 2) { // sao duas notas validas
        scanf("%f", &nota); // Passa o endereço da variável, lembrar do &
        
        if (nota >= 0.0 && nota <= 10.0) {
            media += nota;  // Soma a nota à média 
            contador++;
        } 
        else {
            printf("nota invalida\n");
        }
    }
    
    media = media / 2; // Calcula a média de duas notas
    printf("media = %.2f\n", media);
    
    return 0;
}
