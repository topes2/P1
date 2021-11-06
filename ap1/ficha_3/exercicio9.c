#include <stdio.h>
void main(){
    int num1 , num2;
    printf("Insira um numero de 3 digitos");
    scanf("%d",&num1);
    num2 = num1%10;
    num1 = num1/100;
    if (num2==num1){
        printf("É uma capicoua");
    }else {
        printf("Não é uma capicoa");
    }
}