#include <stdio.h>
#include <stdlib.h>

FILE * abreTesta(char *caminho, char  *modo){
    FILE *f;
    f = fopen(caminho, modo);
    if (f == NULL){
        perror("Erro na abertura do arquivo");
        exit(1);
    }
    return f;
}
/*
int retornasoma(FILE *arq, int sentinela){
    int num, soma = 0;
    fscanf(arq, "%d", &num);
    while (num != sentinela){
        soma += num;
        fscanf(arq, "%d", &num);
    }
    return soma;
}

int main(){
    FILE *arq;
    int resultado;
    arq = abreTesta("/home/julianovitorino/Downloads/somas_2.txt", "r");
    resultado = retornasoma(arq, -9999999);

    printf("Soma = %d\n", resultado);
    fclose(arq);
    return 0;
}
// imprimir na tela o conteudo do arquivo
int main(){
    FILE *arq;
    char c;
    arq = abreTesta("/home/julianovitorino/Downloads/somas_1.txt", "r");
    while (fscanf(arq, "%c", &c) != EOF) {
        printf("%c", c);
    }
    printf("\n");
    fclose(arq);
    return 0;
}
*/
// progrma que copie o conteudo de um arquivo para outro
int funcaoCopia(FILE *arq1, FILE *arq2){
    char c;
    while (fscanf(arq1, "%c", &c) != EOF) {
        fprintf(arq2, "%c", c);
    }
    return 0;
}
int main(){
    FILE *arq1, *arq2;
    arq1 = abreTesta("/home/julianovitorino/Downloads/somas_2.txt", "r");
    arq2 = abreTesta("/home/julianovitorino/Downloads/copia.txt", "w");
    fclose(arq1);
    fclose(arq2);
    return 0;
}