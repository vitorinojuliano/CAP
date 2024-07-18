#include <stdio.h>

int main()
{
    int A, B, C, maior;

    scanf("%d %d %d", &A, &B, &C);

    if (C>B){
        maior = C;
        C = B;
        B = maior;
    }
    printf("%d %d %d\n", A,B,C);
    if (B>A){
        maior = B;
        B = A;
        A = maior;
    }
    printf("%d %d %d\n", A,B,C);
    if (C>B){
        maior = C;
        C = B;
        B = maior;
    }
    printf("%d %d %d\n", A,B,C);

    return 0;
}
