#include <stdio.h>
#include <math.h>

int main() {
    int N;

    // Loop contínuo para processar múltiplas entradas
    while (scanf("%d", &N) && N != 0) {
        int M[15][15];
        int max_value = pow(2, 2 * (N - 1)); // O maior valor será 2^(2*(N-1))
        int tamanho = log10(max_value) + 1; // Tamanho do campo

        // Construir a matriz
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                M[i][j] = pow(2, i + j);
            }
        }

        // Imprimir a matriz
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (j == 0)
                    printf("%*d", tamanho, M[i][j]);
                else
                    printf(" %*d", tamanho, M[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
