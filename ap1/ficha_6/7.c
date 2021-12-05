#include <stdio.h>

float tempoDecorrido(float d,float v);

void main(){
    float d,v;
    printf("Insira a distancia a correr em km\n");
    scanf("%f",&d);
    printf("Insira a velocidade que esta a correr em km/h\n");
    scanf("%f",&v);
    printf("Vai demorar %f horas\n",tempoDecorrido(d,v));
}

float tempoDecorrido(float d,float v){
    return(d/v);
}