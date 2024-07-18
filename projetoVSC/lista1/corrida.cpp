#include <stdio.h>
int main()
{
    int pista, ponto, lugar;
    scanf ("%d%d",&pista,&ponto);
    lugar = pista%ponto;
    printf("%d",lugar);
    return 0;
}