#include <stdio.h>
#include <math.h>

struct valor {
    float x1, y1;
    float x2,y2;
    double distancia;
};

int main(){
    struct valor dist;
    scanf("%f %f", &dist.x1, &dist.y1);
    scanf("%f %f", &dist.x2, &dist.y2);
    
    dist.distancia = sqrt(pow(dist.x2 - dist.x1, 2)+pow(dist.y2 - dist.y1,2));
    printf("%.4lf\n", dist.distancia);

    return 0;
}