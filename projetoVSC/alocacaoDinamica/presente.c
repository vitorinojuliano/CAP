/*Escreva um programa que repita os seguintes passos:
        (a) Leia  inteiros N e M e  aloque dinamicamente uma matriz (de inteiros) de dimensões NxM
        (b) armazene os valores aleatórios de 0 a 10 na matriz (Veja como gerar números aleatórios em C: http://linguagemc.com.br/valores-aleatorios-em-c-com-a-funcao-rand/)
        (c) Imprima a matriz.
        (d) em seguida, leia um valor inteiro X, e imprima "SIM" caso o valor esteja na matriz
ou imprima "NAO" caso não esteja na matriz. Solicite a leitura de um novo valor para X e faça uma nova busca até que seja digitado -1.
Obs1: Verifique se houve erro durante a alocação de memória.
Obs2: Libere a memória alocada quando não for mais necessária
*/
#include <stdio.h>
#include <stdlib.h> 

int main(){
    int n, m;
    int **matriz;
    int i,j;

    printf("digite qtd Linhas Colunas\n");
    scanf("%d %d", &n, &m);

    matriz = (int **) malloc(n*sizeof(int*));
    for (i=0;i<n;i++){
        matriz[i] = (int *) malloc(m*sizeof(int));
        for (j=0; j<m; j++){
            matriz[i][j] = rand()%10;
        }
    }
    for (i=0; i<n; i++){
        for (j=0; j<m; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    int presente, atual;
    do{
        printf("digite um numero: \n");
        scanf("%d", &atual);

        presente = 0;
        for (i=0; i<n; i++){
            for (j=0; j<m; j++){
                if (matriz[i][j] == atual)
                    presente = 1;

            }
        }
        if (presente)
            printf("SIM\n");
        else
            printf("NAO\n");

    }while (atual != -1);

    for (i=0; i<n; i++){
        free(matriz[i]);
    }
    free(matriz);
}