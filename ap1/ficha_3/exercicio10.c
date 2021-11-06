#include <stdio.h>
void main(){
    int x, y;
    printf("Indique as coordenadas X e Y");
    scanf("%d %d", &x,&y);
    if (y>0 && x>0){
        printf("1 quadrante");
    } else if (y<0 && x>0){
        printf("2 quadrante");
    }else if (y>0 && x<0){
        printf("3 quadrante");
    } else if (y<0 && x<0){
        printf("4 quadrante");
    } else{
        printf("Not found.");
    }
}