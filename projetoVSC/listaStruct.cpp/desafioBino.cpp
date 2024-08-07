#include <stdio.h>

int main(){
    int quant, i, j=0, k=0, l=0, m=0;
    scanf("%d", &quant);
    int vetor[quant];
    for(i=0; i<quant; i++){
        scanf("%d", &vetor[i]);
        if (vetor[i]%2==0){
            j++;
        }
        if (vetor[i]%3==0){
            k++;
        }
        if (vetor[i]%4==0){
            l++;
        }
        if (vetor[i]%5==0){
            m++;
        }
    }
    printf("%d Multiplo(s) de 2\n", j);
    printf("%d Multiplo(s) de 3\n", k);
    printf("%d Multiplo(s) de 4\n", l);
    printf("%d Multiplo(s) de 5\n", m);
    return 0;
}