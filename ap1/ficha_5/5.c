#include <stdio.h>
int a,b,c,d,max;
void main(){
    c=1;
    printf("Insira os numeros\n");
    scanf("%d %d",&a, &b);
    if (a<b){
        d = a;
    }else if (b<a){
        d = b;
    }
    while(c <= d){
        if (a%c==0 && b%c==0){
            max = c;
        }
        c++;
    }
    printf("É %d",max);
}