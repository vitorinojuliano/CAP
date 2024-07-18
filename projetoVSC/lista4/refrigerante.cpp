#include <stdio.h>

int main(){
    int entrada, achada, custo;
    int total, garrafas, resultado;

    resultado =0;
    garrafas =0;
    total = 0;

    scanf("%d %d %d", &entrada, &achada, &custo);

    total = entrada + achada;

    while (total >= custo)
    {
        garrafas = total/custo;
        resultado += garrafas;
        total = garrafas + (total % custo);

    }
    printf("%d\n", resultado);
    
    return 0;
}