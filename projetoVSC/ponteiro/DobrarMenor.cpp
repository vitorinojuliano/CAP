/* 4.6-6 Escreva um programa em C para ler duas variáveis do tipo int e dobrar
o valor da menor delas (em caso de igualdade, dobrar o valor da primeira
variável). As comparações e modificações devem ser feitas exclusivamente
usando ponteiros. Os valores devem ser apresentados no final.*/ 

#include <stdio.h>

int main(){
    int valor1, valor2;
    int *ponteiro1, *ponteiro2;

    scanf("%d %d", &valor1, &valor2);
    ponteiro1 = &valor1;
    ponteiro2 = &valor2;

    if (*ponteiro1 <= *ponteiro2){
        *ponteiro1*=2;
    }
    else{
        *ponteiro2*=2;
    }
    printf("valor1 %d, valor2 %d\n", valor1, valor2);
    return 0;
}