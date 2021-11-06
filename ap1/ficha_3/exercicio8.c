#include <stdio.h>
void main(){
    int num1, num2;
    printf("Indique 2 numeros");
    scanf("%d %d", &num1,&num2);
    if (num1%num2==0){
        printf("%d é muiltiplo de %d", num1, num2);
    } else {
        printf("Não sao multiplos");
    }
}