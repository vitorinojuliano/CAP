/*Faça um programa que leia números inteiros do teclado e os armazene em um vetor alocado dinamicamente. O usuário deverá digitar uma sequência de números, sem limite de quantidade. Os números serão digitados um a um e, caso  deseje encerrar a entrada de dados, deverá digitar o número ZERO. Os dados devem ser armazenados na memória do seguinte modo:

        Inicie com um vetor de tamanho 10 alocado dinamicamente;
        Quando  o vetor alocado estiver cheio, realoque a memória adicionado espaço para mais 10 valores (tamanho N+10, onde N inicia com 10);
        Repita este procedimento de expandir dinamicamente com mais 10 valores o vetor alocado cada vez que o mesmo estiver cheio. Assim o vetor será ’expandido’ de 10 em 10 valores.
        Ao final, imprima os valores armazenados no vetor .

    Obs1: Verifique se houve erro durante a alocação de memória.
    Obs2: Libere a memória alocada quando não for mais necessária.
    Obs3: Utilize a função realloc() para realocar a memória.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int *vetor;
    int tamanho = 10;
    int i = 0;
    vetor = (int *) malloc(tamanho * sizeof(int));
    if (vetor == NULL){
        printf("Erro: Memoria insuficiente!!\n");
        exit(1);
    }
    int valor;
    scanf("%d", &valor);
    while (valor != 0){
        if (i == tamanho){
            tamanho += 10;
            vetor = (int *) realloc(vetor, tamanho * sizeof(int));
            if (vetor == NULL){
                printf("Erro: Memoria insuficiente!!\n");
                exit(1);
            }
        }
        vetor[i] = valor;
        i++;
        scanf("%d", &valor);
    }
    for (int j = 0; j < i; j++){
        printf("%d ", vetor[j]);
    }
    printf("\n");
    free(vetor);
}