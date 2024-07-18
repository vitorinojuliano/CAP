#include <stdio.h>

int main()
{
    double p1, p2, media, A, B;
    scanf("%lf",&p1);
    scanf("%lf",&p2);
    A = 3.5;
    B = 7.5;

    media = ((p1*A)+(p2*B))/11;
    printf("MEDIA = %.5lf\n",media);
    return 0;


}