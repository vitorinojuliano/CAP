#include <stdio.h>

int main(){
    int vetA[5];
    int i;
    int maior;
    scanf("%d", vetA[0]);
    maior =vetA[0];
    for (i=1; i<5; i++){
        scanf("%d", &vetA[i]);
        if (vetA[i]> maior){
            maior = vetA[i];
        }
    }
    printf("%d\n", maior);
    return 0;
}