#include <stdio.h>

int main()
{
    int C, P, F, total;
    
    scanf("%d %d %d", &C, &P, &F);
    total = (P/C);
    if (total < F){
        printf("N\n");
    }
    else{
        printf("S\n");
    }
    return 0;
}