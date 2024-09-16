#include <stdio.h>
#include <string.h>

struct planeta {
    char nome[50];
    int ano;
    int qtemp;
};

int main() {
    int quant, i, valor;

    scanf("%d", &quant);
    getchar(); // Remove o '\n' após o número de planetas

    while (quant != 0) {
        struct planeta eles[quant];
        int menor = 1000000;
        char nomeM[50];

        for (i = 0; i < quant; i++) {
            char linha[100];
            fgets(linha, sizeof(linha), stdin);

            // Faz a leitura dos valores na linha
            sscanf(linha, "%s %d %d", eles[i].nome, &eles[i].ano, &eles[i].qtemp);

            valor = eles[i].ano - eles[i].qtemp;
            if (valor < menor) {
                strcpy(nomeM, eles[i].nome);
                menor = valor;
            }
        }

        printf("%s\n", nomeM);

        scanf("%d", &quant);
        getchar(); // Remove o '\n' após a leitura do próximo número
    }
    return 0;
}
