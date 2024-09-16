#include <stdio.h>
#include <stdlib.h>

void desloque_menor(int *vetor, int comprimento) {
    if (comprimento <= 1) {
        return; // Se o comprimento é 1 ou menos, não há nada a fazer.
    }

    int menor_indice = 0;
    
    // Encontrar o índice do menor elemento
    for (int i = 1; i < comprimento; i++) {
        if (vetor[i] < vetor[menor_indice]) {
            menor_indice = i;
        }
    }
    
    // Trocar o menor elemento com o primeiro elemento
    int temp = vetor[0];
    vetor[0] = vetor[menor_indice];
    vetor[menor_indice] = temp;
}

int main() {
    int comprimento;

    // Lê a quantidade de números que serão inseridos
    printf("Digite a quantidade de números: ");
    scanf("%d", &comprimento);

    // Aloca dinamicamente o vetor
    int *vetor = (int *)malloc(comprimento * sizeof(int));

    // Verifica se a alocação de memória foi bem-sucedida
    if (vetor == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    // Lê os números do usuário
    printf("Digite os números:\n");
    for (int i = 0; i < comprimento; i++) {
        scanf("%d", &vetor[i]);
    }

    // Chama a função para deslocar o menor número
    desloque_menor(vetor, comprimento);

    // Exibe o vetor após a chamada da função
    printf("Vetor após desloque_menor:\n");
    for (int i = 0; i < comprimento; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Libera a memória alocada
    free(vetor);

    return 0;
}
