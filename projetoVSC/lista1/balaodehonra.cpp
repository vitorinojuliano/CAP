#include <stdio.h>
int main() 
{
    char letra;
    scanf("%c", &letra);
    if (letra >= 'A' && letra <= 'Z') {
        printf("%d\n",letra - 'A' + 1);
    }
    return 0;
}
