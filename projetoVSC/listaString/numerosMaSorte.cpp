#include <stdio.h>
#include <string.h>

int main(){
    char str[45];

    int i, valor = 0;

    scanf("%s[^\n]", str);
    getchar();
    for (i = 0; i < 45; i++){
        if (str[i] == '1' && str[i+1] == '3'){
            valor = 1;
        }
    }

    if (valor == 1){
        printf("%s es de Mala Suerte\n", str);
    }
    else{
        printf("%s NO es de Mala Suerte\n", str);
    }

    return 0;
}