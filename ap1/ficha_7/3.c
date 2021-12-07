#include <stdio.h>
int a,c,b=0;
int soma(int a);

void main(){
    printf("Nums plz");
    scanf("%d",&a);
    printf("%d",soma(a));
}

int soma(int a){
    b = b + a;
    if (a>0)
    soma(a-1);
    else
    return b;
}