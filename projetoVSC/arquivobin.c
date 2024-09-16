/*Exercício
Defina uma função que leia um conjunto de inteiros de um
arquivo texto (o arquivo contém um inteiro por linha) e os
armazene em um vetor. O primeiro inteiro lido é o tamanho do
vetor. O tamanho do vetor deve ser alocado dinamicamente. A
função deve retornar o endereço da primeira posição do vetor
lido. O ponteiro para inteiro n deverá retornar o tamanho do
array.
int *le_vetor_texto(int *n)
Defina uma função que escreva os elementos de um vetor (e seu
tamanho) em um arquivo de saída binário. O primeiro inteiro
escrito é o tamanho do vetor.
11
void escreve_vetor_binario(int *v, int n)
*/
#include <stdio.h>
#include <stdlib.h>

// Função para abrir arquivos e verificar se foram abertos corretamente
FILE* abrirArquivo(char* caminho, char* modo){
    FILE* arquivo = fopen(caminho, modo);
    if (arquivo == NULL){
        printf("Erro ao abrir o arquivo: %s\n", caminho);
        exit(1);
    }
    return arquivo;
}

// Função para alocar memória para o vetor
int* alocarMemoria(int tam){
    int* vetor = (int*) malloc(tam * sizeof(int));
    if (vetor == NULL){
        printf("Erro na alocação de memória\n");
        exit(1);
    }
    return vetor;
}

// Função que lê um conjunto de inteiros de um arquivo texto e armazena em um vetor
int* le_vetor_texto(int* n) {
    FILE* arquivo = abrirArquivo("/home/julianovitorino/Documentos/BCC/1-semestre/CAP/arquivo.txt", "r");
    
    // Ler o tamanho do vetor
    fscanf(arquivo, "%d", n);
    
    // Alocar memória para o vetor
    int* vetor = alocarMemoria(*n);

    // Ler os elementos do arquivo e armazenar no vetor
    for (int i = 0; i < *n; i++) {
        fscanf(arquivo, "%d", &vetor[i]);
    }

    fclose(arquivo);
    return vetor;
}

// Função que escreve os elementos do vetor em um arquivo binário
void escreve_vetor_binario(int* vetor, int tam){
    // Alterando o nome do arquivo para uma extensão mais específica
    FILE* arquivonovo = abrirArquivo("/home/julianovitorino/Documentos/BCC/1-semestre/CAP/arquivocop.dat", "wb");
    
    // O resto do código permanece o mesmo
    fwrite(&tam, sizeof(int), 1, arquivonovo);
    for (int i = 0; i < tam; i++) {
        fwrite(&vetor[i], sizeof(int), 1, arquivonovo);
    }
    fclose(arquivonovo);
}


int main() {
    int tam;
    
    // Ler o vetor do arquivo texto e retornar o tamanho do vetor
    int* vetor = le_vetor_texto(&tam);

    // Escrever o vetor no arquivo binário
    escreve_vetor_binario(vetor, tam);

    // Liberar a memória alocada
    free(vetor);

    printf("Operação concluída com sucesso.\n");
    return 0;
}
