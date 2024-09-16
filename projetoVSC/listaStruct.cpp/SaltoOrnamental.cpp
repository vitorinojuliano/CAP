#include <stdio.h>
#include <string.h>

struct registro {
    char nome[30];
    float notas[7];
    float notafinal;
    float grauDificuldade;
};

int main() {
    int quant, i, j;
    float somador, menor, maior;
    
    scanf("%d", &quant);
    struct registro atletas[quant];
    
    for (i = 0; i < quant; i++) {
        // limpar para nao dar problema
        getchar(); 

        fgets(atletas[i].nome, 30, stdin);
        
        // tirar caracter de nova linha
        atletas[i].nome[strcspn(atletas[i].nome, "\n")] = '\0';

        scanf("%f", &atletas[i].grauDificuldade);

        somador = 0.0;
        menor = 10.0;
        maior = 0.0;
        
        for (j = 0; j < 7; j++) {
            scanf("%f", &atletas[i].notas[j]);
            somador += atletas[i].notas[j];
            
            if (menor > atletas[i].notas[j]) {
                menor = atletas[i].notas[j];
            }
            if (maior < atletas[i].notas[j]) {
                maior = atletas[i].notas[j];
            }
        }
        
        // nota final
        atletas[i].notafinal = (somador - menor - maior) * atletas[i].grauDificuldade;
    }

    // Imprimir os resultados finais
    for (i = 0; i < quant; i++) {
        printf("%s: %.2f\n", atletas[i].nome, atletas[i].notafinal);
    }
    
    return 0;
}
