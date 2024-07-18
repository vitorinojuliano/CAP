#include <stdio.h>

int main(){
    int x,y, aux;

    scanf("%d\n",&x);
    scanf("%d",&y);

    aux = 0;

    if (y>x){
        aux = y;
        y =x; 
        x = aux;
        
    }
    if (x%2!=0){
        x-=2;
    }

    if (x%2==0){
        x--;
    }
    
    for (int i = x; i > y;i-=2){
        aux = aux + i;
    }
    printf("%d\n",aux);

    return 0;
    
}