#include <stdio.h>

int main()
{
    int M, A, B, C, maior;

    scanf("%d",&M);
    scanf("%d",&A);
    scanf("%d",&B);
    maior = 0;
        C = (M-(A+B));
        if (C>B){
            maior = C;
            C = B;
            B = maior;
        }
        if (B>A){
            maior = B;
            B = A;
            A = maior;
        }
        if (C>B){
            maior = C;
            C = B;
            B = maior;
        }
        printf("%d\n",C);
    
    return 0;
}