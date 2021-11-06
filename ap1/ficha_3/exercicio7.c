#include <stdio.h>
void main (){
    float alt;
    printf("Qual é a sua altura?");
    scanf("%f",&alt);
    alt = alt*10;
    if (alt < 13.){
        printf("É baixissima");
    } else if (alt>=13 && alt<16){
        printf("É baixa");
    } else if (alt>=16 && alt<175){
        printf("É mediana");
    } else if (alt>=175 && alt<19){
        printf("É alta");
    }else{
        printf("É altissima");
    }
}