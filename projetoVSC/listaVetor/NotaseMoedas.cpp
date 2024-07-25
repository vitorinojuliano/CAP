#include <stdio.h>

int main() {
    int i, valor, notas[6] = {100, 50, 20, 10, 5, 2}, moedas[6] = {100, 50, 25, 10, 5, 1};
    double parteDecimal, valorReal, soma = 0;
    scanf("%lf", &valorReal);

    valor = (int)valorReal;
     
    printf("NOTAS:\n");
    for (i = 0; i < 6; i++) {
        printf("%d nota(s) de R$ %d.00\n", valor / notas[i], notas[i]);
        soma += (valor / notas[i]) * notas[i];
        valor = valor % notas[i];
    }

    parteDecimal = (valorReal - soma) * 100; // Converter para centavos

    printf("MOEDAS:\n");
    for (i = 0; i < 6; i++) {
        int numMoedas = (int)parteDecimal / moedas[i];
        printf("%d moeda(s) de R$ %.2f\n", numMoedas, moedas[i] / 100.0);
        parteDecimal = (int)parteDecimal % moedas[i];
    }
    
    return 0;
}
