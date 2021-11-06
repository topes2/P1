#include <stdio.h>
#include <math.h>
int main(){
    float  num , root;
    printf("Insira um numero");
    scanf("%f",&num);
    if (num < 0){
        printf("O numero é negativo");
    } 
    else {
        root = sqrt(num);
        printf("A root é %f", root);
    }
    return 0;
}