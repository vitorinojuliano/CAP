#include <stdio.h>

int main()
{   // declara variaveis 
    int C, P, F, total;
    
    scanf("%d %d %d", &C, &P, &F); // ver variaveis 

    total = (P/C);
    if (total < F){
        printf("N\n");
    }
    else{
        printf("S\n");
    }
    return 0;
}