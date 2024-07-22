#include <stdio.h>

int main()
{   // declarando variaveis 
    float salario, novosalario, reajuste;
    int percentual;

    scanf("%f", &salario);// lendo o salario

// blocos de comandos dado um intervalo atribui uma porcentagem
        percentual = 15;
    if (salario<= 400.00){ 
    }
    else{
        if (salario<=800.00){
            percentual = 12;
        }
        else{
            if (salario <= 1200.00){
                percentual = 10;
            }
            else{
                if (salario <= 2000.00){
                    percentual = 7;
                }
                else{
                    percentual = 4;
                }
            }
        }
    }

// Calculo de reajuste e novo salario
    reajuste = salario*((float) percentual/100);
    novosalario = salario+reajuste;

// imprime os dados na tela
    printf("Novo salario: %.2f\n",novosalario);
    printf("Reajuste ganho: %.2f\n", reajuste);
    printf("Em percentual: %d %%\n", percentual);

    return 0;
}