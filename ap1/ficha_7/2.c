#include <stdio.h>

int fib(int n);

void main(){
    int n=5;
    printf("%d",(fib(n)));
}

int fib(int n){
    int f;
    if(n<2)
        return 1;
    else{
        f = fib(n-1) + fib(n-2);
        return f;
    }
}