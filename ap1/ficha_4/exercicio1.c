#include <stdio.h>
void main(){
    int x,y;
    printf("Insira o numero do x e de y");
    scanf("%d %d",&x,&y);
    if (x>y){
        printf("1");
    } else if(x<y){
        printf("-1");
    } else if(x==y){
        printf("0");
    }
}