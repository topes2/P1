#include <stdio.h>
void main(){
    int ano;
    printf("Indique um ano");
    scanf("%d",&ano);
    if (ano%4==0){
        printf("O ano é bissexto");
    }else if (ano%100==0){
        printf("Não é bissexto");
    }else if (ano%400==0){
        printf("É bissexto");
    }
}