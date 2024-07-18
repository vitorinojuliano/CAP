#include <stdio.h>

int main()
{
    int P,R;
    char bolinha;

    scanf ("%d %d", &P,&R);

    if (P==0){
        bolinha = 'C';
    }
    else{
        if (R==0){
            bolinha = 'B';
        }
        else{
            bolinha = 'A';
        }
    }
    printf("%c\n", bolinha);
    return 0;
}