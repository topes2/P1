#include <stdio.h>

int fat1(int n);
int fat2(int n, int f);

void main(){
    int n,f;
    printf("insira o inicio");
    scanf("%d",&n);
    printf("%d",fat1(n));
    printf("%d",fat2(n,f));
}

int fat1(int n){
    int f = 1;
    while( n > 0){
        f = n * f;
        n--;
    }
    return f;
}
                                                            
int fat2(int n,int f){
    f = n * f;
    n--;
    if (n > 0){
    fat2(n,f);
    }else if (n == 0){
        return f;
    }
}

//3*2*1
//3*2*1