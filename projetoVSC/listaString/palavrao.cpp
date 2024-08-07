#include <stdio.h>
#include <string.h>

int main(){
    char nome[20];

    fgets(nome, 20, stdin);

    if (strlen(nome)>10)
        printf("palavrao\n");
    else
        printf("palavrinha\n");

    return 0;
}