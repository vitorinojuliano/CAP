#include <stdio.h>

int main()
{
    int hora,minuto,segundo, exemplo;
    

    scanf("%d",&exemplo);
    hora = exemplo/3600;
    minuto = (exemplo - (3600*hora))/60;
    segundo = exemplo%60;


    printf("%d : %d : %d\n",hora,minuto,segundo);

    return 0;
}
