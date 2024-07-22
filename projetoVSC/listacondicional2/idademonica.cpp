#include <stdio.h>

int main()
{
    int M, A, B, C, maior;

    scanf("%d",&M);
    scanf("%d",&A);
    scanf("%d",&B);
    maior = 0;
        C = (M-(A+B));
// trocador 
        // garante que B sempre maior C
        if (C>B){
            maior = C;
            C = B;
            B = maior;
        }
        // garante que A sempre maior B
        if (B>A){
            maior = B;
            B = A;
            A = maior;
        }
        // garante que B seja sempre maior C
        if (C>B){
            maior = C;
            C = B;
            B = maior;
        }
        // trocador sempre ficara A B C ordem
        printf("%d\n",C);
    
    return 0;
}