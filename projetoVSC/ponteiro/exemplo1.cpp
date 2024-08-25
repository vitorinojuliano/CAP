/*Escreva um programa que repita os seguintes passos:
(a) Leia  inteiros N e M e  aloque dinamicamente uma matriz (de inteiros) de dimensões NxM
(b) armazene os valores aleatórios de 0 a 10 na matriz (Veja como gerar números aleatórios em C: http://linguagemc.com.br/valores-aleatorios-em-c-com-a-funcao-rand/)
(c) Imprima a matriz.
(d) em seguida, leia um valor inteiro X, e imprima "SIM" caso o valor esteja na matriz
ou imprima "NAO" caso não esteja na matriz. Solicite a leitura de um novo valor para X e faça uma nova busca até que seja digitado -1.

Obs1: Verifique se houve erro durante a alocação de memória.
Obs2: Libere a memória alocada quando não for mais necessária*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int **ponteiro;
    int linhas, colunas;

    scanf("%d %d", &linhas, &colunas);
    
    // alocar memoria para a matriz NxM
    ponteiro = (int **) malloc(linhas * sizeof(int *));
    // alocar memoria para cada linha
    for (int i = 0; i < linhas; i++){
        ponteiro[i] = (int *) malloc(colunas * sizeof(int));
    }

    // Verificar se a alocação deu erro
    if (ponteiro == NULL){
        printf("Erro: Memoria insuficiente!!\n");
        exit(1);
    }

    // armazenar valores aleatorios de 0 a 10
    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            ponteiro[i][j] = rand() % 10;
        }
    }
    // imprimir valores
    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            printf("%d ", ponteiro[i][j]);
        }
        printf("\n");
    }
    // verificar se valor esta na matriz
    int valor, presente;
    scanf("%d", &valor);

    while (valor >=0){
        
        for (int i = 0; i < linhas; i++){
            for (int j = 0; j < colunas; j++){
                if (ponteiro[i][j] == valor){
                    presente = 1;
                }
            }
        }
        // SIM para numero presente e NAO para ausente
        if (presente)
            printf("SIM\n");
        else
            printf("NAO\n");

        scanf("%d", &valor);
        presente = 0;

    }
    
    // liberar memoria
    for (int i = 0; i < linhas; i++){
        free(ponteiro[i]);
    }
    free(ponteiro);
}