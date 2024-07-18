#include <stdio.h>

int main() {
    int P, N;
    
    // Leitura da altura do pulo e do número de canos
    scanf("%d %d", &P, &N);
    
    int canos[N];
    
    // Leitura das alturas dos canos
    for (int i = 0; i < N; i++) {
        scanf("%d", &canos[i]);
    }
    
    // Verificação se o sapo consegue atravessar todos os canos
    for (int i = 1; i < N; i++) {
        if ((canos[i] - canos[i - 1]) > P) {
            printf("GAME OVER\n");
            return 0;
        }
    }
    
    printf("YOU WIN\n");
    return 0;
}
