#include <stdio.h>
int a,b,c,d;
void main(){
    a=1;
    b=0;
    while(a!=0){
        printf("Insira os numeros\n");
        scanf("%d",&a);
        c++;
        if (a>b){
            b = a;
            d=c;
        }
    }
    printf("O maior numero da sequencia é %d e foi o %d a ser inserido",b,d);
}