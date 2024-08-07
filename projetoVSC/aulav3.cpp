#include <stdio.h>

int main(){
    int matriz[3][3];
    int i, j;
    int somador = 0;
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            scanf("%d", &matriz[i][j]);
            somador+=matriz[i][j];
        }
    }
    printf("Total = %d\n", somador);
    return 0;

}