#include <stdio.h>

int main(){
    int quantIdade = 6;
    int populacao = 120;
    int i, idade;

    int tamanho[populacao] = {0};

    for (i=0; i<quantIdade; i++){
        do{
            scanf("%d", &idade);
            if (idade<0 || idade>120){
                printf("Idade invalida\n");
            }
        } while(idade<0 || idade>120);
        tamanho[idade]++;

    }
    for(i=0; i<populacao; i++){
        if (tamanho[i] != 0){
            printf(" idade %i repetiu %d\n", i, tamanho[i]);
        }
    }
    return 0;
}