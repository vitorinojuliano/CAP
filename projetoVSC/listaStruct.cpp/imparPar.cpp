#include <stdio.h>
#include <string.h>

struct registro {
    char nome[101];
    char escolha[6];
    int numero;
};

void limpar_nova_linha(char *str) {
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
}

int main() {
    int quant;
    int resultado = 0;

    scanf("%d", &quant);
    getchar(); // Para consumir o caractere '\n' restante após a leitura de quant

    while (quant > 0) {
        struct registro jogador1, jogador2;
        
        // Leitura dos nomes e escolhas
        fgets(jogador1.nome, sizeof(jogador1.nome), stdin);
        limpar_nova_linha(jogador1.nome);
        
        fgets(jogador1.escolha, sizeof(jogador1.escolha), stdin);
        limpar_nova_linha(jogador1.escolha);
        
        fgets(jogador2.nome, sizeof(jogador2.nome), stdin);
        limpar_nova_linha(jogador2.nome);
        
        fgets(jogador2.escolha, sizeof(jogador2.escolha), stdin);
        limpar_nova_linha(jogador2.escolha);

        // Leitura dos números
        scanf("%d %d", &jogador1.numero, &jogador2.numero);
        getchar(); // Para consumir o caractere '\n' restante após a leitura dos números

        resultado = jogador1.numero + jogador2.numero;
        
        if ((resultado % 2 == 0 && strcmp(jogador1.escolha, "PAR") == 0) ||
            (resultado % 2 != 0 && strcmp(jogador1.escolha, "IMPAR") == 0)) {
            printf("%s\n", jogador1.nome);
        } else {
            printf("%s\n", jogador2.nome);
        }

        quant--;
    }

    return 0;
}
