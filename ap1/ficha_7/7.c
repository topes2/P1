#include <stdio.h>

int pascal(int l,int c);

void main(){
    int l,c;
    printf("Insira os numeros");
    scanf("%d %d",&l,&c);
    printf("%d",pascal(l,c));
}

int pascal(int l,int c){
    if(c == 0 || c ==l)
    return 1;
    else
    return((pascal(l-1,c-1)+pascal(l-1,c)));
}