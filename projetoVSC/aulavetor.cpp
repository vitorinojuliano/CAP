#include <stdio.h>

int main(){
    float v1[5];
    float soma, media;
    int i;
    soma = 0;
    for (i=0; i<5; i++){
        scanf("%f", &v1[i]);
        soma+=v1[i];
    }
    printf("%.2f\n", soma);
    media = soma/i;
    printf("%.1f\n", media);

    for (i=0; i<5; i++){
        if (v1[i] > media){
            printf("%.1f\n", v1[i]);
        }
    }


    return 0;
}