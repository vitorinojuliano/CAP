#include <stdio.h>

int main()
{
    int inicio, termino, duracao;

    scanf("%d %d", &inicio, &termino);

    if (inicio < termino){
        duracao = termino - inicio;
    }
    else{
        if (inicio > termino){
            duracao = (24-inicio)+termino;
        }
        else{
            duracao = 24;
        }
    }
    printf("O JOGO DUROU %d HORA(S)\n", duracao);
    return 0;
}