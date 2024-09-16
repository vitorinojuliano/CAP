#include <stdio.h>
#include <string.h>

int main() {
    char str[45];
    int i, valor = 0;

    // Usa fgets para ler a string de entrada
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove o '\n' ao final da string, se houver

    // Percorre a string para verificar a presença de "13"
    for (i = 0; i < strlen(str) - 1; i++) {
        if (str[i] == '1' && str[i+1] == '3') {
            valor = 1;
            // Não utiliza break; apenas atualiza o valor
        }
    }

    if (valor == 1) {
        printf("%s es de Mala Suerte\n", str);
    } else {
        printf("%s NO es de Mala Suerte\n", str);
    }

    return 0;
}
