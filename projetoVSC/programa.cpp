#include <stdio.h>

int main(){
    int i;

    struct aluno
    {
        int num_alunos;
        float media;
        float nota1, nota2, nota3;
    };

    struct aluno alunos[2];
        for(i=0; i<2; i++){
            scanf("%d", &alunos[i].num_alunos);
            scanf("%f", &alunos[i].nota1);
            scanf("%f", &alunos[i].nota2);
            scanf("%f", &alunos[i].nota3);
            alunos[i].media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3)/3.0;
            printf("%.1f\n", alunos[i].media);
        }


    
    return 0;
}