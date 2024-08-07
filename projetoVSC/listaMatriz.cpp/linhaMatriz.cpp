#include <stdio.h>

int main() {
    int L;
    char T;
    double M[12][12];
    double sum = 0.0;

  
    scanf("%d", &L);
    scanf(" %c", &T); 


    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
        }
    }

    
    for (int j = 0; j < 12; j++) {
        sum += M[L][j];
    }


    if (T == 'S') {
        printf("%.1lf\n", sum);
    } else if (T == 'M') {
        printf("%.1lf\n", sum / 12.0);
    }

    return 0;
}
