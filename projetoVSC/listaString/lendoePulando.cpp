#include <stdio.h>
#include <string.h>

int main() {
    char strings[10][31]; // 10 strings de 30 caracteres + 1 para o \0
    int i;

    for (i = 0; i < 10; i++) {  // lê as 10 strings
        fgets(strings[i], sizeof(strings[i]), stdin); // lê até encontrar um \n ou 30 caracteres
        strings[i][strcspn(strings[i], "\n")] = '\0'; // Remove o '\n' ao final da string, se houver
    }
    
    // imprime as strings 3, 7 e 9
    printf("%s\n%s\n%s\n", strings[2], strings[6], strings[8]);
    
    return 0;
}
