#include <stdio.h>

int main(){
    int n, a, e, g;

    scanf("%d", &n);
    // executa n vezes
    for (int i=0; i<n; i++){
        scanf("%d %d %d", &a, &e, &g);
        // se cumprir todas as condicoes
        if (a>=200 && a<=300 && e>=50 && g>=150){
            printf("Sim\n");
        }
        else{
            printf("Nao\n");
        }
    }
    return 0;
}

