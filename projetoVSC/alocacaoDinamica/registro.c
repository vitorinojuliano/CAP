/*Crie um programa que declare uma estrutura (registro) para o cadastro de alunos.

        (a) Deverão ser armazenados, para cada aluno: matrícula, sobrenome (apenas um) e ano de nascimento;
        (b) Ao início do programa, o usuário deverá informar o número de alunos que serão armazenados;
        (c) O programa deverá alocar dinamicamente a quantidade necessária de memória para armazenar os registros dos alunos;
        (d) O programa deverá pedir ao usuário que entre com as informações dos alunos;
        (e) Ao final, mostrar os dados armazenados.

    Obs1: Verifique se houve erro durante a alocação de memória.
    Obs2: Libere a memória alocada quando não for mais necessária.
*/
#include <stdio.h>
#include <stdlib.h>

struct cadastro{
    int matricula;
    char sobrenome[30];
    int ano;

};

int main(){
    int nalunos, i;
    printf("quantos alunos \n");
    scanf("%d", &nalunos);

    struct cadastro *alunos = (struct cadastro*) malloc(nalunos*sizeof(struct cadastro));
    // verificar se alocou
    if (alunos == NULL){
        printf("Erro: Memoria insuficiente!!\n");
        exit(1);
    }
    // pedir os dados
    for(i=0; i<nalunos; i++){
        printf("matricula: ");
        scanf("%d", &alunos[i].matricula);
        printf("sobrenome: ");
        scanf("%s", alunos[i].sobrenome);
        printf("ano: ");
        scanf("%d", &alunos[i].ano);
    }
    // mostrar os dados
    for(i=0; i<nalunos; i++){
        printf("matricula: %d\n", alunos[i].matricula);
        printf("sobrenome: %s\n", alunos[i].sobrenome);
        printf("ano: %d\n", alunos[i].ano);
    }
    
    free(alunos);
}