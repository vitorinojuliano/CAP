/*
#include <stdio.h>

int main() {
    int v1, v2, v3;
    int *p_minimo, *p_maximo;

    // Entrada de valores
    scanf("%d %d %d", &v1, &v2, &v3);
    // Inicializando ponteiros para o menor e o maior valor
    if (v1 <= v2 && v1 <= v3) {
        p_minimo = &v1;
    } else if (v2 <= v1 && v2 <= v3) {
        p_minimo = &v2;
    } else {
        p_minimo = &v3;
    }

    if (v1 >= v2 && v1 >= v3) {
        p_maximo = &v1;
    } else if (v2 >= v1 && v2 >= v3) {
        p_maximo = &v2;
    } else {
        p_maximo = &v3;
    }

    // Trocando os valores usando os ponteiros
    int temp = *p_minimo;
    *p_minimo = *p_maximo;
    *p_maximo = temp;

    // Exibindo os valores após a troca
    printf("%d %d %d\n", v1, v2, v3);

    return 0;
}

#include <stdio.h>

int main() {
    // Criando variáveis inteiras
    int a = 10, b = 20, c = 30;
    // Criando ponteiros para as variáveis
    int *p_a = &a;
    int *p_b = &b;
    int *p_c = &c;

    // Imprimindo os endereços usando os ponteiros
    printf("\nEndereço armazenado no ponteiro p_a: %p\n", &p_a);
    printf("Endereço armazenado no ponteiro p_b: %p\n", &p_b);
    printf("Endereço armazenado no ponteiro p_c: %p\n", &p_c);

    return 0;
}

#include <stdio.h>

int main(){
    int valor = 2;
    int *ponteiro = &valor;

    printf("Endereço de valor: %p\n", ponteiro);
}

#include <stdio.h>

int main(){
    int valor;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);
    int *ponteiro;
    int *ponteiro2;

    ponteiro = &valor;
    //ponteiro2 = ponteiro;

    *ponteiro2 = *ponteiro * 2; 
    *ponteiro+=1;

    printf("Valor = %d ponteiro = %d ponteiro2 = %d\n", valor, *ponteiro, *ponteiro2); 


}

// alocacao de memoria 
#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ponteiro;
    int i;

    ponteiro = (int *) malloc(5*sizeof(int));
    if (ponteiro == NULL){
        printf("Erro: Memoria insuficiente\n");
        exit(1);
    }
    for(i=0;i<5;i++){
        ponteiro[i] = i + 1;
    }
    for (int i =0; i<5;i++){
        printf("%d\t", ponteiro[i]);
    }
    printf("\n");
    ponteiro = (int *) realloc(ponteiro, 3*sizeof(int));
    for (i = 0; i<3;i++){
        printf("menor %d\t", ponteiro[i]);
    }
    printf("\n");

    ponteiro = (int *) realloc(ponteiro, 10*sizeof(int));
    for (i = 0; i<10;i++){
        printf("maior %d\t", ponteiro[i]);
    }
    printf("\n");
    free(ponteiro);

    return 0;
}
*/