/*Exercício
Defina uma função que leia um conjunto de inteiros de de
um arquivo binário. O primeiro inteiro lido é o tamanho
do vetor. O tamanho do vetor deve ser alocado
dinamicamente. A função deve retornar o endereço da
primeira posição do vetor lido.O ponteiro para inteiro n
deverá retornar o tamanho do array.
int *le_vetor_binario(int *n)
Defina uma função que escreva um vetor de inteiros v (e
seu tamanho n) em um arquivo texto. O primeiro inteiro
escrito é o tamanho do vetor.
void escreve_vetor_texto(int *v, int n)*/

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

// Função que lê um conjunto de inteiros de um arquivo binário e armazena em um vetor
int* le_vetor_binario(int* n) {
    FILE* arquivo = abrirArquivo("/home/julianovitorino/Documentos/BCC/1-semestre/CAP/arquivocop.dat", "rb");
    
    // Ler o tamanho do vetor
    fread(n, sizeof(int), 1, arquivo);
    
    // Alocar memória para o vetor
    int* vetor = alocarMemoria(*n);

    // Ler os elementos do arquivo e armazenar no vetor
    fread(vetor, sizeof(int), *n, arquivo);

    fclose(arquivo);
    return vetor;
}

// Função que escreve os elementos do vetor em um arquivo texto
void escreve_vetor_texto(int* vetor, int tam){
    // Alterando o nome do arquivo para uma extensão mais específica
    FILE* arquivo = abrirArquivo("/home/julianovitorino/Documentos/BCC/1-semestre/CAP/arquivocop.txt", "w");
    
    // Escrever o tamanho do vetor no arquivo
    fprintf(arquivo, "%d\n", tam);
    
    // Escrever os elementos do vetor no arquivo
    for (int i = 0; i < tam; i++) {
        fprintf(arquivo, "%d\n", vetor[i]);
    }

    fclose(arquivo);
}

int main(){
    int tam;
    int* vetor = le_vetor_binario(&tam);
    escreve_vetor_texto(vetor, tam);
    free(vetor);
    return 0;
}