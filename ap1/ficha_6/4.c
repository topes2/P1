#include <stdio.h>

int where(int a,int t, int v0,int p0);

void main(){
    int a,t,v0,p0;
    printf("Insira a aceleraçao\n");
    scanf("%d",&a);
    printf("Insira a quanto tempo foi registada\n");
    scanf("%d",&t);
    printf("Insira a velocidade inicial\n");
    scanf("%d",&v0);
    printf("Insira a posicao inicial\n");
    scanf("%d",&p0);
    printf("%d",where(a,t,v0,p0));
}

int where(int a,int t,int v0,int p0){
    return( p0 + v0 * t +(1/2) * a * t*t);
}