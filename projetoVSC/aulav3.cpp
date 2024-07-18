#include <stdio.h>

int main(){
    // zerando cada posicao
    int ipessoa, idade[121]={0};
    int i;
    // quantidade de pessoas que eu vou ler
    for (i=0; i<10; i++){
        scanf("%d", &ipessoa);
        // incrementa 1 na posicao.
        idade[ipessoa]++;

    }
    // intervalo que ta a idade
    for (i=0; i<121;i++){
        if (idade[i]>0){
            printf("idade %i: %i\n", i, idade[i]);

        }
    }
    return 0;
}