#include <stdio.h>

int main()
{
    float A, B, C, A2, B2C2, maior;

    scanf("%f %f %f", &A, &B, &C);

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

    A2 = A*A;
    B2C2 = (B*B) + (C*C);

    if (A >= (B+C)){
        printf("NAO FORMA TRIANGULO\n");
    }
    else{
        if (A2 == B2C2){
            printf("TRIANGULO RETANGULO\n");
        }
        else{
            if (A2 > B2C2){
                printf("TRIANGULO OBTUSANGULO\n");
            }
            else{
                if (A2 < B2C2){
                    printf("TRIANGULO ACUTANGULO\n");
                }
            }
            
        }

        if ((A == B) && (B == C)){
            printf("TRIANGULO EQUILATERO\n");
        }
        else{
            if ((A == B) || (B == C) || (A == C)){
                printf("TRIANGULO ISOSCELES\n");
            }
        }
    }
    return 0;
}