#include <stdio.h>

int main()
{
    int codigo, alcool, gasolina, diesel;
    alcool = 0;
    gasolina = 0;
    diesel = 0;
    
    
    do
    {
        scanf("%d", &codigo);
        if (codigo == 1){
            alcool = alcool +1;
        }
        else{
            if (codigo == 2){
                gasolina = gasolina + 1;
            }
            else{
                if (codigo == 3){
                    diesel = diesel + 1;
                }
            }
        }
    } while (codigo != 4);
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);

    
}