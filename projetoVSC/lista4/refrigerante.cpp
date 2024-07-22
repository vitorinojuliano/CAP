#include <stdio.h>

int main(){
    int entrada, achada, custo;
    int total, garrafas, resultado;

    resultado =0;
    garrafas =0;
    total = 0;

    scanf("%d %d %d", &entrada, &achada, &custo);

    total = entrada + achada;

    // condicao para comprar uma garrafa nova
    while (total >= custo)
    {   // novas garrafas consegue comprar
        garrafas = total/custo;
        // acumula novas garrafas na variavel resultados
        resultado += garrafas;
        // atualiza o total com as garrafas geradas com as vazias e mais as que sobraram.
        total = garrafas + (total % custo);

        // esse bloco executa enquanto der para comprar mais garrafas com as vazia, julgando que ele bebe todas as que consegue comprar para 
        // comprar mais.

    }
    // fora do loop
    printf("%d\n", resultado);
    
    return 0;
}