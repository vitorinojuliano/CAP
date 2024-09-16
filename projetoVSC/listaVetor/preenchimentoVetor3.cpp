#include <stdio.h>

int main(){
    // Vetor de 100 elementos e um valor com ponto flutuante grande
    double vetor[100], valor;
    int i;
    // Lendo o valor
    scanf("%lf", &valor);
    // Preenchendo o vetor
    for (i = 0; i < 100; i++){
        vetor[i] = valor;
        printf("N[%d] = %.4lf\n", i, vetor[i]);
        // Dividindo o valor por 2
        valor /= 2;
    }
    return 0;
}