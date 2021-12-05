#include <stdio.h>

int speed(int a,int t, int v0);

void main(){
    int a,t,v0;
    printf("Insira a aceleraçao\n");
    scanf("%d",&a);
    printf("Insira a quanto tempo foi registada\n");
    scanf("%d",&t);
    printf("Insira a velocidade inicial\n");
    scanf("%d",&v0);
    printf("%d",speed(a,t,v0));
}

int speed(int a,int t,int v0){
    return( v0 + a * t);
}