#include <stdio.h>
int a,b;
void main(){
    a=1;
    b=0;
    while(a!=0){
        printf("Insira os numeros\n");
        scanf("%d",&a);
        if (a>b){
            b = a;
        }
    }
    printf("O maior numero da sequencia é %d",b);
}