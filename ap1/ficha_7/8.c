#include <stdio.h>

int pascal(int l,int c);
int triangulo(int n);

void main(){
    int l,c,n;
    printf("Insira os numero\n");
    scanf("%d",&n);
    triangulo(n);
}

int pascal(int l,int c){
    if(c == 0 || c ==l)
    return 1;
    else
    return((pascal(l-1,c-1)+pascal(l-1,c)));
}

int triangulo(int n){
    
    int l=0,c=0,i;
    if (n==0){
    printf("1");
    }else if(c==l){
    printf("1 \n");
    }else if(n>0){
    printf("%d",pascal(l+1,c+1));
    }
    triangulo(n--);
}