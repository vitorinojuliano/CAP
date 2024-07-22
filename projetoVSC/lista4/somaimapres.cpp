#include <stdio.h>

int main(){
    int x,y, aux;

    scanf("%d\n",&x);
    scanf("%d",&y);

    aux = 0;
    // garante que x sera sempre maior 
    if (y>x){
        aux = y;
        y =x; 
        x = aux;
        
    }
    // se o maior for impar subtrai 2
    if (x%2!=0){
        x-=2;
    }
    else{
        // se o maior for par subtrai 1
        x--;
    }
    // faz a soma entre os impares
    for (int i = x; i > y;i-=2){
        aux += i;
    }
    printf("%d\n",aux);

    return 0;
    
}