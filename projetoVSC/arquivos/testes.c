#include <stdio.h>
#include <stdlib.h>

FILE* abrir(char *caminho, char *modo){
    FILE *arquivo = fopen(caminho, modo);
    if (arquivo == NULL){
        perror("erro ao abrir arquivo\n");
        exit(1);
    }
    return arquivo;
}

int main(){
    int valor;
    //printf("Digite um valor inteiro: ");
    //scanf("%d", &valor);

    FILE *arquivo;
    arquivo = abrir("/home/julianovitorino/Documentos/arquivoteste.txt", "r+");
    //fprintf(arquivo, "teste de escrita %d\n", valor);
    fscanf(arquivo, "%d", &valor);
    
    printf("valor lido: %d\n", valor);

    fclose(arquivo);

}