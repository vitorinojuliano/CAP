/*Crie um programa que declare uma estrutura (registro) para o cadastro de alunos.

(a) Deverão ser armazenados, para cada aluno: matrícula, sobrenome (apenas um) e ano de nascimento;
(b) Ao início do programa, o usuário deverá informar o número de alunos que serão armazenados;
(c) O programa deverá alocar dinamicamente a quantidade necessária de memória para armazenar os registros dos alunos;
(d) O programa deverá pedir ao usuário que entre com as informações dos alunos;
(e) Ao final, mostrar os dados armazenados.

    Obs1: Verifique se houve erro durante a alocação de memória.
    Obs2: Libere a memória alocada quando não for mais necessária.*/

#include <stdio.h>
#include <stdlib.h> 

typedef struct
{
    int matricula;
    char sobrenome[31]; // 30 caracteres + 1 para o \0
    int anoNascimento;

}cadastro;

int main(){
    int quantAlunos;
    scanf("%d", &quantAlunos);

    // alocar memoria para a quantidade de alunos dentro da struct com ponteiro
    cadastro *alunos = (cadastro *) malloc(quantAlunos * sizeof(cadastro));

    if (alunos == NULL){
        printf("Erro: Memoria insuficiente!!\n");
        exit(1);
    }
    
    for (int i = 0; i < quantAlunos; i++){
        scanf("%d %30s %d", &alunos[i].matricula, alunos[i].sobrenome, &alunos[i].anoNascimento);
    }

    for (int i = 0; i < quantAlunos; i++){
        printf("%d %s %d\n", alunos[i].matricula, alunos[i].sobrenome, alunos[i].anoNascimento);
    }
    
    free(alunos);

    return 0;
}