#include <stdio.h>

int main(){
    char tipo;
    double M[12][12], soma = 0.0;
    int i, j, k = 0;

    scanf("%c", &tipo);
    for (int i = 0; i < 12; i++){
        for (int j = 0; j < 12; j++){
            scanf("%lf", &M[i][j]);
        }
    }

    for (i = 0; i < 12; i++){
        k = 12 - i - 1;
        for (j = 0; j < k; j++){
                soma += M[i][j];
        }
        
    }

    if (tipo == 'S'){
        printf("%.1lf\n", soma);
    } else if (tipo == 'M'){
        printf("%.1lf\n", soma / 66.0);
    }
    return 0;
}