#include <stdio.h>
#include <string.h>

int ehPalindromo(char *str, int inicio, int fim) {
    // Caso base: se o índice inicial for maior ou igual ao final, a string é um palíndromo
    if (inicio >= fim)
        return 1;
    
    // Verifica se os caracteres atuais são diferentes
    if (str[inicio] != str[fim])
        return 0;
    
    // Chama recursivamente para verificar os próximos caracteres
    return ehPalindromo(str, inicio + 1, fim - 1);
}

int verificaPalindromo(char *str) {
    int tamanho = strlen(str);
    return ehPalindromo(str, 0, tamanho - 1);
}

int main() {
    char str[100];
    
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove o '\n' gerado pelo fgets
    str[strcspn(str, "\n")] = '\0';
    
    if (verificaPalindromo(str))
        printf("A string é um palíndromo.\n");
    else
        printf("A string não é um palíndromo.\n");

    return 0;
}
