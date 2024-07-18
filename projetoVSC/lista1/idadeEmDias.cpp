#include <stdio.h>

int main()
{
    int idade, dia, mes, ano;
    scanf("%d",&idade);
 
    ano = idade/365;
    mes = (idade%365)/30;
    dia = (idade%365)%30;

    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", mes);
    printf("%d dia(s)\n", dia);

    return 0;

}