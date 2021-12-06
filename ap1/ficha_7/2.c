#include <stdio.h>

void main(){
    int n;
    printf("insira o inicio");
    scanf("%d",&n);
    printf("%d",fib(n));
}

int fib(int n){
    int f;
    if(n<2)
        return 1;
    else{
        f=fib(n-1)+ fib(n-2);
        return f;
    }