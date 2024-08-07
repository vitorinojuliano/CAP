#include <stdio.h>

struct oEscolhido
{
    int matricula;
    float nota;
};

int main(){
    int i, quantidade;
    float maiorNota =0.0;
    int Nmatricula = 0;

    scanf("%d", &quantidade);

    struct oEscolhido alunos[quantidade];

    for(i=0; i<quantidade; i++){
        scanf("%d %f", &alunos[i].matricula, &alunos[i].nota);
        if (alunos[i].nota > maiorNota){
            maiorNota = alunos[i].nota;
            Nmatricula = alunos[i].matricula;
        }
        
    }
    if (maiorNota >=8.0)
            printf("%d\n", Nmatricula);
    else
        printf("Minimum note not reached\n");


    
    return 0;
}
