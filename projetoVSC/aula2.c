#include <stdio.h>
#include <stdlib.h>

FILE* abrirArquivo(char *caminho, char *modo){
    FILE* arquivo = fopen(caminho, modo);

    if (arquivo == NULL){
        perror("Erro ao abrir arquivo\n");
        exit(1);
    }
    return arquivo;
}
/*
void imprimir(int *vetor, int tamanho){
    printf("valores do arquivo:\n");
    for (int j=0; j<tamanho; j++){
        printf("%d ", vetor[j]);
    }
    printf("\n");
}

int* alocarmemoria(int tamanho){
    int *vetor = (int *) malloc(tamanho*sizeof(int));

    if (vetor == NULL){
        printf("Erro na alocação\n");
        exit(1);
    }
    return vetor;
}

*/
int main(){
    FILE* arquivo = abrirArquivo("/home/julianovitorino/Documentos/BCC/1-semestre/CAP/juliano2.txt", "w");
    int tam;
    printf("Digite o tamanho do arquivo\n");
    scanf("%d", &tam);
    fprintf(arquivo,"%d",tam);

    /*
    fscanf(arquivo,"%d", &tam);
    int *vetor = alocarmemoria(tam);
    for (int i=0; i<(tam); i++){
        fscanf(arquivo, "%d", &vetor[i]);
    }
    imprimir(vetor, tam);

    free(vetor);
    */
    fclose(arquivo);
}