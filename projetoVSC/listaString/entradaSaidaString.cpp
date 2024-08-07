#include <stdio.h>
#include <string.h>

int main(){
    char str[101];
    char str2[101];
    char str3[101];

    // Usando fgets para ler as strings, incluindo espaços
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove o '\n' ao final da string

    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    fgets(str3, sizeof(str3), stdin);
    str3[strcspn(str3, "\n")] = '\0';

    // imprime na as especificações
    printf("%s%s%s\n", str, str2, str3);
    printf("%s%s%s\n", str2, str3, str);
    printf("%s%s%s\n", str3, str, str2);
    // imprime os 10 primeiros de cada string
    printf("%.10s%.10s%.10s\n", str, str2, str3);

    return 0;
}
