#include <stdio.h>

typedef struct {
    int multiplos2;
    int multiplos3;
    int multiplos4;
    int multiplos5;
} Contadores;

int main() {
    int quant, i;
    scanf("%d", &quant);
    
    int vetor[quant];
    Contadores cont = {0, 0, 0, 0}; // Inicializa os contadores como zero

    for (i = 0; i < quant; i++) {
        scanf("%d", &vetor[i]);
        
        if (vetor[i] % 2 == 0) {
            cont.multiplos2++;
        }
        if (vetor[i] % 3 == 0) {
            cont.multiplos3++;
        }
        if (vetor[i] % 4 == 0) {
            cont.multiplos4++;
        }
        if (vetor[i] % 5 == 0) {
            cont.multiplos5++;
        }
    }

    printf("%d Multiplo(s) de 2\n", cont.multiplos2);
    printf("%d Multiplo(s) de 3\n", cont.multiplos3);
    printf("%d Multiplo(s) de 4\n", cont.multiplos4);
    printf("%d Multiplo(s) de 5\n", cont.multiplos5);
    
    return 0;
}
