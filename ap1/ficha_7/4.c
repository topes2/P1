#include <stdio.h>

int multiplo(int n,int i,int b);

void main(){
    int m,i,b=0;
    printf("Insira os numeros");
    scanf("%d %d",&m,&i);
    printf("%d",multiplo(m,i,b));
}

int multiplo(int n,int i,int b){
    if (i>0)
    b = b+n;
    else 
    return b;
    multiplo(n,i-1,b);
}