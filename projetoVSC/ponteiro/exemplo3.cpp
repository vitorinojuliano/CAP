#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor = NULL;
    int tamanho = 10;  
    int contador = 0;  
    int numero;

    // Alocação inicial de memória
    vetor = (int *)malloc(tamanho * sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar memória.\n");
        exit(1);
    }

    scanf("%d", &numero);
    while (numero != 0) {
        
        // Verifica se o vetor está cheio
        if (contador == tamanho) {
            tamanho += 10;
            int *temp = (int *)realloc(vetor, tamanho * sizeof(int));
            if (temp == NULL) {
                printf("Erro ao realocar memória.\n");
                free(vetor);
                exit(1); 
            }
            vetor = temp; // Atualiza o ponteiro para o novo vetor realocado
        }

        // Armazena o número no vetor
        vetor[contador] = numero;
        contador++;

        scanf("%d", &numero);
    }

    // Exibe os números armazenados
    for (int i = 0; i < contador; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Libera a memória alocada
    free(vetor);
    return 0;
}
