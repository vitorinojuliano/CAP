#include <stdio.h>
#include <stdlib.h>

FILE* abrirArquivo(char* caminho, char* modo){
    FILE* arquivo = fopen(caminho, modo);

    if (arquivo == NULL){
        printf("erro ao abrir arquivo\n");
        exit(1);
    }
    return arquivo;
}

int main(){
    int valor;
    FILE* arquivo = abrirArquivo("/home/julianovitorino/Documentos/BCC/1-semestre/CAP/arquivo.bin", "wb");
    
    for (int i=9; i>=0; i--){
        valor = i;
        fwrite(&valor, sizeof(int), 1, arquivo);
    }

    fclose(arquivo);
}