#include <stdio.h>
#include <math.h>
void main(){
    float x1, x2 ,y1 ,y2,dist;
    printf("Indique as coordenadas do ponto 1");
    scanf("%f %f",&x1,&y1);
    printf("Indique as coordenadas do ponto 2");
    scanf("%f %f",&x2,&y2);
    dist = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("A distancia entre os dois pontos é %f", dist);
}