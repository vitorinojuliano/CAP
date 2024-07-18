#include <stdio.h>

int main()
{
    float valor;
    const char* intervalo;

    scanf("%f", &valor);

    if (valor >= 0.00 && valor <= 25.00){
        intervalo = "Intervalo [0,25]";
    }
    else{
       if (valor>25.00 && valor <= 50.00){
        intervalo = "Intervalo (25,50]";
       }
       else{
            if (valor > 50.00 && valor <= 75.00){
                intervalo = "Intervalo (50,75]";
            }
            else{
                if (valor > 75.00 && valor <= 100.00){
                intervalo = "Intervalo (75,100]";
                }
                else{
                    intervalo = "Fora de intervalo";
                }
            }
        }
    } 
    printf("%s\n", intervalo);
    return 0;
}