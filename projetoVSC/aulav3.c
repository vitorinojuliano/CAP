#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Função para abrir o arquivo
FILE* abrirArquivo(char *caminho, char *modo) {
    FILE* arquivo = fopen(caminho, modo);

    if (arquivo == NULL) {
        perror("Erro ao abrir arquivo\n");
        exit(1);
    }
    return arquivo;
}

int main(){
    char caracter[100];
    // Abrir o arquivo para escrita ("a")
    FILE* arquivo = abrirArquivo("/home/julianovitorino/Documentos/BCC/1-semestre/CAP/juliano2.txt", "r");
    //FILE* arquicopia = abrirArquivo("/home/julianovitorino/Documentos/BCC/1-semestre/CAP/copia.txt", "w");
    /*
    while((caracter=fgetc(arquivo))!= EOF){
        printf("%c", caracter);
        fprintf(arquicopia,"%c", caracter);
    }
    */
    fgets(caracter, 100, arquivo);
    fgets(caracter, 100, arquivo);
    fgets(caracter, 100, arquivo);
    
    //caracter[strcspn(caracter, "\n")] = '\0';

    char* result = fgets(caracter,100, arquivo);
    if (result == NULL){
        printf("Erro na leitura\n");
    }
    else{
        //caracter[strcspn(caracter, "\n")]= '\0';
        printf("%s", result);
    }
    // Fechar o arquivo
    fclose(arquivo);

    return 0;
}
