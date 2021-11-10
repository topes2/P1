#include <stdio.h>
int a,b,c;
void main(){
    printf("Insira o numero \n");
    scanf("%d",&a);
    if (a%3==0 && a%2!=0){
        printf("É impar e multiplo de 3\n");
    }else if (a%3==0){
        printf("É multiplo de 3.\n");
    }else if (a%2!=0){
        printf("O numero é impar.");
    }
}