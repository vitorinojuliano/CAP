#include <stdio.h>
#include <string.h>

int main(){
    char strin[500];

    scanf("%[^\n]", strin); // lê até encontrar um \n
    getchar(); // ler e descarta o \n

    if(strlen(strin) <= 140){ // verifica se o tamanho da string é menor ou igual a 140
        printf("TWEET\n");
    }
    else{
        printf("MUTE\n"); // senao imprime MUTE
    }
    return 0;
}