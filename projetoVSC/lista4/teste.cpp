#include <stdio.h>

int main() {
    float nota, media;
    int contador, nova;

    nova = 1;  // Inicializa nova com 1 para começar o primeiro cálculo
    while (nova != 2) {
        media = 0.0;
        contador = 0;
        
        // Lê duas notas válidas
        while (contador < 2) {
            scanf("%f", &nota);
            if (nota >= 0.0 && nota <= 10.0) {
                media += nota;
                contador++;
            } else {
                printf("nota invalida\n");
            }
        }

        // Calcula e imprime a média
        printf("media = %.2f\n", media / 2);

        // Pergunta se deseja fazer um novo cálculo
        printf("novo calculo (1-sim 2-nao)\n");
        do {
            scanf("%d", &nova);
            if (nova != 1 && nova != 2) {
                printf("novo calculo (1-sim 2-nao)\n");
            }
        } while (nova != 1 && nova != 2);
    }
    return 0;
}
