#include <stdio.h>
#include <string.h>

int main(){
    int quant;
    int i, j;

    scanf("%d", &quant); // lê a quantidade de sobrenomes
    char sobrenomes[quant][43]; // ler quant com 43 caracteres + 1 para o \0
    
    for(i = 0; i < quant; i++){ // lê os sobrenomes
        scanf("%42[^\n]", sobrenomes[i]); // lê até encontrar um \n ou 42 caracteres
        getchar(); // ler e descarta o \n
    }

    for(i = 0; i < quant; i++){ // imprime os sobrenomes
        for(j = 0; j < strlen(sobrenomes[i]); j++){
            if(sobrenomes[i][j] == ' '){
                printf("%c", sobrenomes[i][j+1]);
            }
        }
    }



    return 0;
}