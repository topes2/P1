#include <stdio.h>

float tempoDecorrido(float d1,float v1,float d2,float v2,float d3,float v3);
float horaChegada(float tempo,float t);

void main(){
    float d1=2,d2=6,d3=2,v1=7.5,v2=10.9,v3=7.5,t,hp,mp,tempo;
    printf("Insira a hora e minutos agora separado por um espaço");
    scanf("%f %f",&hp,&mp);
    mp = mp / 100;
    tempo = hp + mp;
    printf("Vais acabar as %f horas\n",horaChegada(tempo,tempoDecorrido(d1,v1,d2,v2,d3,v3)));
}

float tempoDecorrido(float d1,float v1,float d2,float v2,float d3,float v3){
    return(d1/v1+d2/v2+d3/v3);
}

float horaChegada(float tempo,float t){
    return(tempo+t);
}