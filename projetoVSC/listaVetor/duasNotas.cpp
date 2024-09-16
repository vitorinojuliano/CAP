#include <stdio.h>

int main(){
    int compra, pago, troco, notas[7] = {100, 50, 20, 10, 5, 2, 1}, quantNota;
    int i;
    // Lendo a compra e o pagamento
    scanf("%d %d", &compra, &pago);
     // enquanto a compra e o pago for diferente de 0
    while (compra != 0 && pago != 0){
        quantNota = 0;
        troco = pago - compra;
        // percorre a lista de notas
        for (i = 0; i < 7; i++){
            // se e possivel dar o troco com a nota
            if (troco/notas[i] > 0){
                quantNota++;
                // atualiza o troco
                troco = troco % notas[i];
            }
        }
        // se for possivel dar o troco com 2 notas
        if (quantNota == 2)
            printf("possible\n");
        else
            printf("impossible\n");
    // Lendo a compra e o pagamento para continuar o loop
    scanf("%d %d", &compra, &pago);
    }

    return 0;

}