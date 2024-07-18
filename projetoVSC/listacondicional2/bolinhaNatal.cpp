#include <stdio.h>

int main() {
    int bolinhas, galhos, falta;

    scanf("%d", &bolinhas);
    scanf("%d", &galhos);

    // Forcar ser um numero inteiro
    int bolinhas_necessarias = galhos / 2;

    if (bolinhas >= bolinhas_necessarias) {
        printf("Amelia tem todas bolinhas!\n");
    } else {
        falta = bolinhas_necessarias - bolinhas;
        printf("Faltam %d bolinha(s)\n", falta);
    }
    return 0;
}
