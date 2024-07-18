#include <stdio.h>

int main() {
    int E, F, C;
    printf("Digite o número de garrafas vazias que Tim já possui (E), garrafas encontradas (F) e garrafas necessárias para comprar um novo refrigerante (C): ");
    scanf("%d %d %d", &E, &F, &C);

    // Inicialmente, o número total de garrafas vazias é a soma de E e F.
    int total_vazias = E + F;
    int total_bebidas = 0;

    // Enquanto Tim puder trocar garrafas vazias por refrigerantes novos:
    while (total_vazias >= C) {
        // Calcula quantos refrigerantes ele pode obter
        int novos_refrigerantes = total_vazias / C;
        
        // Atualiza o total de refrigerantes bebidos
        total_bebidas += novos_refrigerantes;
        // Atualiza o número de garrafas vazias restantes
        total_vazias = novos_refrigerantes + (total_vazias % C);
    }

    printf("Tim bebeu %d refrigerantes no dia.\n", total_bebidas);

    return 0;
}
