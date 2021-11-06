#include <stdio.h>
int main(){
    float max , min , num;
    max = 50;
    min = 0;
    printf("Insira o numero ");
    scanf("%f",&num);
    if (num>min && num<max){
        printf("Congrats!");
    } else {
        printf("Not in range");
    }
    return 0;
}