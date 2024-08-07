#include <stdio.h>
#include <string.h>

struct registro{
    char nome[101];
    char escolha[6];
    int numero;
};

int main(){
    int quant;
    int resultado =0;
    scanf("%d", &quant);

    while (quant > 0)
    {   
        
        struct registro jogador1, jogador2;
        scanf("%s %s %s %s", jogador1.nome, jogador1.escolha, jogador2.nome, jogador2.escolha);
        scanf("%d %d", &jogador1.numero, &jogador2.numero);
        resultado = jogador1.numero + jogador2.numero;
        if((resultado%2 ==0 && strcmp(jogador1.escolha,"PAR")==0) || (resultado%2 !=0 && strcmp(jogador1.escolha,"IMPAR")==0) ){
            printf("%s\n", jogador1.nome);
        }
        else{
            printf("%s\n", jogador2.nome);
        }
        quant--;
    }
    
    return 0;
}