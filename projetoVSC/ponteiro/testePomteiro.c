#include <stdio.h>  

int main(){
    /* //incrementeando ponteiros
    int valor = 10;
    int *ponteiro;
    ponteiro = &valor;
    (*ponteiro)++;
    printf("valor %d\n", valor);

    *ponteiro = *ponteiro *10;
    printf("valor %d\n", valor);
    

    // segundo exemplo para manipulação de ponteiros com vetores
    int vetor[] = {1, 2, 3, 4, 5, 6, 7, 8};
    printf("Vetor antes do incremento\n");
    for (int i = 0; i < 8; i++){
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }
    printf("---------------------------\n");

    vetor[4] = 40;

    int *ponteiro = vetor;
    *ponteiro = 99;
    *(ponteiro + 1) = 33;
    ponteiro[6] = 10 + ponteiro[7];

    printf("Vetor depois do incremento\n");
    for (int i = 0; i < 8; i++){
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }
    printf("---------------------------\n");
    */
    // terceiro exemplo para manipulação de ponteiros com vetores
    
    /*\
    int vetor[] = {1, 2, -4, 4, 5};
    int *ponteiro = vetor;
    
    ponteiro = &vetor[5];

    *ponteiro =0;
    ponteiro[1] = 7;
    printf("vetor = %d\n", ponteiro[1]);
    
    ponteiro[-1] = 0;
    
    ponteiro++;
    
    ponteiro[0] = 0;
    *(ponteiro + 1) = 0;
    

    for (int i = 0; i < 5; i++){
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }
    // terceiro exemplo para manipulação de ponteiros com vetores

    
    int contador = 0;
    while (*ponteiro >= 0){
        contador++;
        ponteiro++;
    }
    printf("---------------------------\n");
    printf("posicao[%d] = %d\n", contador+1, *ponteiro);
    */
    // quarto exemplo para manipulação de ponteiros com vetores
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int *ponteiro = &matriz[0][0];
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            // i*3 representa o deslocamento de linha, assim o j comeca a contar a partir do inicio da linha.
            printf("matriz[%d][%d] = %d\n", i, j, *(ponteiro + i*3 + j));
        }
    }
}